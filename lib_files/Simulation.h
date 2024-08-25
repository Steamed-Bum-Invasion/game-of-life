#pragma once
#include "grid.h"
#include <utility>

class Simulation{

public:

    /*Simulation(int width, int height, int cellsize);*/
    Simulation(int width, int height, int cellsize);
    void Draw();
    int neighbour_count(int row, int col);
    void set_value(int row, int col, bool value);
    void rule_check();
    void set_init_state();


private:
    Grid grid;
    
};
