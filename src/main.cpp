#include "../3rdparty/raylib/include/raylib.h"
//#include "raylib.h"
int main() {
    InitWindow(800, 600, "test");
    {
        while (!WindowShouldClose()) {
            ClearBackground(RAYWHITE);
            BeginDrawing();
            {
                DrawText("Hello World!", 190, 200, 20, LIGHTGRAY);
                DrawText("Hello World!", 190, 400, 20, PINK);
            }
            EndDrawing();
        }
    }
    CloseWindow();
    return 0;
}