#include <stdio.h>
#include <raylib.h>

#include "pertti.h"

int main (int argc, char *argv[])
{
  Pertti *pertti = createPertti(
    (Vector2) {300, 300}, // position
    (Color) {0, 255, 120, 255}, // colors
    20 // size
  );

  Vector2 screenSize = {1280, 720};

  InitWindow(screenSize.x, screenSize.y, "C GO 🅱️RRRR");
  SetTargetFPS(60);
  
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    drawPertti(pertti);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
