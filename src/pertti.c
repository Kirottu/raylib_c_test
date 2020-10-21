#include <stdlib.h>
#include <raylib.h>
#include "pertti.h"

void drawPertti (Pertti *pertti)
{
  DrawCircle(pertti->position.x, pertti->position.y, pertti->size, pertti->color);
}

Pertti* createPertti (Vector2 position, Color color, float size)
{
  Pertti *pertti;
  pertti = malloc(sizeof(Pertti));

  *pertti = (Pertti) {position, color, size};
  return pertti;
}
