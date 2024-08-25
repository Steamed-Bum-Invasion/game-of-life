#pragma once
#include <vector>
#include <iostream>
#include <raylib.h>
#include <random>

class Grid {
public:
    Grid(const int& width, const int& height, const int& cellsize);

    void Draw();
    void set_value(int row, int col, int value);
    bool getValue(int row, int col);
    int getRowcount ();
    int getColcount ();
    std::vector<std::vector<bool>> getGrid ();
    void setGrid (std::vector<std::vector<bool>> grid_copy);

private:
    int m_rows;
    int m_collums;
    int m_cellsize;
    std::vector<std::vector<bool>> cells;
};


