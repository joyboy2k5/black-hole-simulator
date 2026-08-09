#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Black Hole Simulator - BHS 0.2v");
    float x=400;
    float y=300;
    float vx=100;
    float vy=100;
    

    while (!WindowShouldClose())
    {
        BeginDrawing();
        float dt = GetFrameTime();

        ClearBackground(BLACK);
       

        DrawCircle(x, y, 10, WHITE);

        if (IsKeyDown(KEY_RIGHT)){
             x += vx * dt;
        }

        if (IsKeyDown(KEY_LEFT)){
            x -= vx * dt;
        }

        if (IsKeyDown(KEY_DOWN)){
            y += vy * dt;
        }

        if (IsKeyDown(KEY_UP)){
            y -= vy * dt;
        
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
