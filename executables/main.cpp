#include "Simulation.h"


int main()
{
    Color black = {0,0,0,255};
    const int WINDOW_HEIGHT = 5000;
    const int WINDOW_WIDTH = 5000;
    const int cellsize = 12;
    int FPS = 15;

    Simulation sim {WINDOW_HEIGHT,WINDOW_WIDTH,cellsize};

    SetTargetFPS(FPS);
    InitWindow(WINDOW_WIDTH,WINDOW_HEIGHT,"Game Of Life");


    sim.set_init_state();

    while (!WindowShouldClose()) {
    
    BeginDrawing();
    ClearBackground(black);
    sim.Draw();                                           
    sim.rule_check();
    EndDrawing() ;

    }

    CloseWindow();

}
