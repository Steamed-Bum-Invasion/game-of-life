#pragma once
#include <vector>
#include <iostream>
#include <raylib.h>
#include <random>

class Grid {
public:
    Grid(const int& width, const int& height, const int& cellsize);

    void draw();
    void set_value(int row, int col, int value);
    bool get_value(int row, int col);
    int get_rowcount ();
    int get_colcount ();
    std::vector<std::vector<bool>> get_grid ();
    void set_grid (std::vector<std::vector<bool>> grid_copy);
    void toggle_cell (int row, int col);
    void clear();

private:
    int m_rows;
    int m_collums;
    int m_cellsize;
    std::vector<std::vector<bool>> cells;
};


