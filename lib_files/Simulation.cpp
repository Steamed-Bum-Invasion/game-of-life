#include "Simulation.h"
#include <utility>
#include <vector>

Simulation::Simulation(int width, int height, int cellsize)
   : grid(width,height,cellsize)
{};

void Simulation::Draw(){
    grid.Draw();
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
   int neighbourCount {0};

   for (auto offset : offsets) {
      
      int neighbour_row = (row + offset.first + grid.getRowcount()) % grid.getRowcount();
      int neighbour_col = (col + offset.second + grid.getColcount()) % grid.getColcount();

      if (neighbour_row >= 0 && neighbour_row <=grid.getColcount() && neighbour_col >=0 && neighbour_col <=grid.getRowcount()){

         if (grid.getValue(neighbour_row,neighbour_col) == 1){
            ++neighbourCount;
         }
      }
   }

   /*std::cout << neighbourCount << "\n";*/
   return neighbourCount;            
}


void Simulation::rule_check() {
    auto grid_copy = grid.getGrid();

    int numRows = grid.getRowcount(); // Assuming these methods are available
    int numCols = grid.getColcount();

    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            // Get the current value of the cell
            int currentValue = grid.getValue(row, col);

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
    grid.setGrid(grid_copy);
}

void Simulation::set_init_state(){

   int numRows = grid.getRowcount(); // Assuming these methods are available
   int numCols = grid.getColcount();

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
