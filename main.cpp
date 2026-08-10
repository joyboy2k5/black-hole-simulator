#include "raylib.h"
#include <cmath>

int main()
{
    InitWindow(1280, 720, "Black Hole Simulator - BHS 0.35");

    float x = 640;
    float y = 360;

    float vx = 0;
    float vy = 0;

    float ax = 50;
    float ay = 50;

    while (!WindowShouldClose())
    {
        BeginDrawing();

        float dt = GetFrameTime();

        ClearBackground(BLACK);

        if (x>=1270 ){
            x=1270;
            vx=-vx;
        }   
        if (x<=10){
            x=10;
            vx=-vx;
        }
        if (y<=10){
            y=10;
            vy=-vy;
        }
        
        if (y>=710){
            y=710;
            vy=-vy;
        }

        if (IsKeyDown(KEY_RIGHT))
            ax = 50;

        else if (IsKeyDown(KEY_LEFT))
            ax = -50;

        else
            ax = 0;

        if (IsKeyDown(KEY_DOWN))
            ay = 50;

        else if (IsKeyDown(KEY_UP))
            ay = -50;

        else
            ay = 0;
        if (IsKeyDown(KEY_SPACE)){
            vx *= pow(0.4, dt);
            vy *= pow(0.4, dt);

            if (vx > -0.1 && vx < 0.1)
                vx = 0;

            if (vy > -0.1 && vy < 0.1)
                vy = 0;
        }
            
        
        vx += ax * dt;
        vy += ay * dt;

       
        x += vx * dt;
        y += vy * dt;

        DrawCircle(x, y, 10, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}