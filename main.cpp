#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Black Hole Simulator - BHS 0.1");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);


        DrawCircle(400, 300, 10, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
