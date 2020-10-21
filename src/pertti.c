#include "pertti.h"
#include <raylib.h>

void drawPertti(Pertti *new_pertti)
{
  DrawCircle(new_pertti->position.x, new_pertti->position.y, new_pertti->size, new_pertti->color);
}

Pertti * createPertti(Vector2 position, Color color, float size)
{
  pertti = (Pertti) {position, color, size};
  return &pertti;
}
