#include <stdio.h>
#include <string.h>
#include <raylib.h>
#include "pertti.h"

int main(int argc, char *argv[])
{
  Pertti *pertti = createPertti((Vector2) {0, 0}, (Color) {0, 255, 120, 255}, 20);

  Vector2 screenSize = {1280, 720};

  InitWindow(screenSize.x, screenSize.y, "C GO BRRRR");
  SetTargetFPS(60);
  
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
