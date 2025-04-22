#include "grid.h"
#include <memory>
#include <raylib.h>


Grid::Grid(const int& width, const int& height, const int& cellsize)
    : m_collums {width/cellsize},
      m_rows {height/cellsize}, 
      m_cellsize {cellsize},
      cells(m_rows, std::vector<bool>(m_collums,false))
{
};

void Grid::draw(){


    for (int row = 0; row < m_rows; row++) {
        for (int col = 0; col < m_collums; col++) {

        
            Color color = cells[row][col] ? Color{55,255,55,255} : Color{128,128,128,255};
            DrawRectangle(col*m_cellsize,row*m_cellsize,m_cellsize-1,m_cellsize-1,color);
        }
        
    }

}

void Grid::set_value(int row, int col, int value){
    if (row >=0 && row < m_rows && col >= 0 && col < m_collums){
        cells[row][col] = value;
    }
}

bool Grid::get_value(int row, int col){
    if (row >=0 && row < m_rows && col >= 0 && col < m_collums){
        return cells[row][col];
    }
    else{
        return false;
    }
}

int Grid::get_colcount(){
    return m_collums;
}

int Grid::get_rowcount(){
    return m_rows;
}

 std::vector<std::vector<bool>> Grid::get_grid(){
    return cells;
}


 void Grid::set_grid(std::vector<std::vector<bool>> grid_copy){
    cells = grid_copy;
    
}

void Grid::toggle_cell(int row, int col){
    cells[row][col] = !cells[row][col];
}

void Grid::clear(){
    cells = std::vector<std::vector<bool>>(m_rows, std::vector<bool>(m_collums, false));
}
