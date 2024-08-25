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

void Grid::Draw(){


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

bool Grid::getValue(int row, int col){
    if (row >=0 && row < m_rows && col >= 0 && col < m_collums){
        return cells[row][col];
    }
    else{
        return false;
    }
}

int Grid::getColcount(){
    return m_collums;
}

int Grid::getRowcount(){
    return m_rows;
}

 std::vector<std::vector<bool>> Grid::getGrid(){
    return cells;
}


 void Grid::setGrid(std::vector<std::vector<bool>> grid_copy){
    cells = grid_copy;
    
}
