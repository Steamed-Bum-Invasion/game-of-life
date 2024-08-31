#include "Simulation.h"
#include <iostream>
#include <raylib.h>

int main()
{
    Color black = {0, 0, 0, 255};
    const int WINDOW_HEIGHT = 600;
    const int WINDOW_WIDTH = 600;
    const int cellsize = 15;
    int FPS = 30;

    // Initialize Raylib
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game Of Life");
    SetTargetFPS(FPS);

    // Initialize Simulation
    Simulation sim {WINDOW_HEIGHT, WINDOW_WIDTH, cellsize};

    while (!WindowShouldClose()) {

        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {
            Vector2 mousePosition = GetMousePosition();
            int row = mousePosition.y / cellsize;
            int column = mousePosition.x / cellsize;
            sim.toggle_cell(row, column);
        }

        if (IsKeyPressed(KEY_ENTER)) {
            SetWindowTitle("Game of Life is running ...");
            sim.start();  // Uncomment when ready
        }

        else if(IsKeyPressed(KEY_SPACE))
        {
            SetWindowTitle("Game of Life has stopped.");
            sim.stop();
        }

        else if(IsKeyPressed(KEY_C))
        {
            sim.clear();
        }

        else if(IsKeyPressed(KEY_F))
        {
            FPS = FPS + 5;
            SetTargetFPS(FPS);
        }

        else if(IsKeyPressed(KEY_S))
        {
            FPS = FPS - 5;
            SetTargetFPS(FPS);
        }

        else if(IsKeyPressed(KEY_R))
        {
            sim.set_init_state();
        }

        // Start drawing
        BeginDrawing();
        ClearBackground(black);
        
        // Simulation logic
        sim.rule_check();
        sim.draw();
        
        // End drawing
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

