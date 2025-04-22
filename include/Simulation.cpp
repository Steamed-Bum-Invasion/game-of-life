#include "Simulation.h"
#include <utility>
#include <vector>

Simulation::Simulation(int width, int height, int cellsize)
   : grid(width,height,cellsize)
{};

void Simulation::draw(){
    grid.draw();
}

void Simulation::set_value(int row, int col, bool value){
   grid.set_value(row,col,value);
}

int Simulation::neighbour_count(int row, int col){
   
   std::vector<std::pair<int,int>> offsets {
      {1,1},{-1,-1},{-1,1},{1,-1},
      {0,1},{0,-1},{1,0},{-1,0},
   };
   
   /*int value = grid.getValue(row,col);*/
   int num_neighbours {0};

   for (auto offset : offsets) {
      
      int neighbour_row = (row + offset.first + grid.get_rowcount()) % grid.get_rowcount();
      int neighbour_col = (col + offset.second + grid.get_colcount()) % grid.get_colcount();

      if (neighbour_row >= 0 && neighbour_row <=grid.get_colcount() && neighbour_col >=0 && neighbour_col <=grid.get_rowcount()){

         if (grid.get_value(neighbour_row,neighbour_col) == 1){
            ++num_neighbours;
         }
      }
   }

   /*std::cout << neighbourCount << "\n";*/
   return num_neighbours;            
}


void Simulation::rule_check() {
    if (run_state){

        auto grid_copy = grid.get_grid();

        int numRows = grid.get_rowcount(); // Assuming these methods are available
        int numCols = grid.get_colcount();

        for (int row = 0; row < numRows; ++row) {
            for (int col = 0; col < numCols; ++col) {
                // Get the current value of the cell
                int currentValue = grid.get_value(row, col);

                // Check neighbor count
                int neighbors = neighbour_count(row, col);

                if (currentValue == 0) {
                    // Cell is dead; it becomes alive if exactly 3 neighbors are alive
                    if (neighbors == 3) {
                        grid_copy[row][col] = 1;
                    }
                } else if (currentValue == 1) {
                    // Cell is alive; it stays alive if 2 or 3 neighbors are alive
                    if (neighbors == 2 || neighbors == 3) {
                        grid_copy[row][col] = 1;
                    } else {
                        // Otherwise, the cell dies
                        grid_copy[row][col] = 0;
                    }
                }
            }
        }
        // Update the original grid with the new state
        grid.set_grid(grid_copy);
    }
}

void Simulation::set_init_state(){

    if (!is_running()){
       int numRows = grid.get_rowcount(); // Assuming these methods are available
       int numCols = grid.get_colcount();

       // Set up the random number generator
        std::random_device rd; // Obtain a seed from the hardware
        std::mt19937 gen(rd()); // Mersenne Twister engine seeded with rd
        std::uniform_int_distribution<> dis(0, 1); // Distribution in range [0, 1]
       
        for (int row = 0; row < numRows; ++row) {
          for (int col = 0; col < numCols; ++col) {

          
          bool value = dis(gen) ==1;
          grid.set_value(row,col,value);

          }
       }
    }
}

bool Simulation::is_running(){
    return run_state;
}

void Simulation::start(){
     run_state = true;
}

void Simulation::stop(){
     run_state = false;
}

void Simulation::toggle_cell(int row, int col){
    if (!is_running()){
        grid.toggle_cell(row,col);
    }
}

void Simulation::clear(){
    grid.clear();
}
