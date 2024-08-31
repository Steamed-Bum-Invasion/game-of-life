#pragma once
#include "grid.h"
#include <utility>

class Simulation{

public:

    /*Simulation(int width, int height, int cellsize);*/
    Simulation(int width, int height, int cellsize);
    void draw();
    int neighbour_count(int row, int col);
    void set_value(int row, int col, bool value);
    void rule_check();
    void set_init_state();
    bool is_running();
    void start();
    void stop();
    void toggle_cell (int row, int col);
    void clear();



private:
    Grid grid;
    bool run_state = false;
    
};
