#include "raylib.h"
#include <cmath>

int main()
{
    InitWindow(1280, 720, "Black Hole Simulator - BHS 0.4");

    // Gravity
    float G = 50000;
    float M = 100;

    // Black hole
    float blackHoleX = 640;
    float blackHoleY = 360;

    // Particle
    float x = 800;
    float y = 300;

    float vx = 0;
    float vy = 0;

    float ax = 0;
    float ay = 0;

    while (!WindowShouldClose())
    {
        float dt = GetFrameTime();

        // -------------------------
        // KEYBOARD ACCELERATION
        // -------------------------

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

        // -------------------------
        // BRAKING
        // -------------------------

        if (IsKeyDown(KEY_SPACE))
        {
            vx *= pow(0.4, dt);
            vy *= pow(0.4, dt);

            if (vx > -0.1 && vx < 0.1)
                vx = 0;

            if (vy > -0.1 && vy < 0.1)
                vy = 0;
        }

        // -------------------------
        // GRAVITY
        // -------------------------

        float dx = blackHoleX - x;
        float dy = blackHoleY - y;

        float distance = sqrt(dx * dx + dy * dy);

        float gravityAx = 0;
        float gravityAy = 0;

        if (distance > 1)
        {
            float gravity = G * M / (distance * distance);

            float dirX = dx / distance;
            float dirY = dy / distance;

            gravityAx = gravity * dirX;
            gravityAy = gravity * dirY;
        }

        // -------------------------
        // PHYSICS
        // -------------------------

        vx += (ax + gravityAx) * dt;
        vy += (ay + gravityAy) * dt;

        x += vx * dt;
        y += vy * dt;

        // -------------------------
        // BOUNDARIES
        // -------------------------

        if (x >= 1270)
        {
            x = 1270;
            vx = -vx;
        }

        if (x <= 10)
        {
            x = 10;
            vx = -vx;
        }

        if (y >= 710)
        {
            y = 710;
            vy = -vy;
        }

        if (y <= 10)
        {
            y = 10;
            vy = -vy;
        }

        // -------------------------
        // DRAW
        // -------------------------

        BeginDrawing();

        ClearBackground(BLACK);

        DrawCircle(blackHoleX, blackHoleY, 30, PURPLE);
        DrawCircle(x, y, 10, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}