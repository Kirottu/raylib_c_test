#ifndef PERTTI_H
#define PERTTI_H

#include <raylib.h>

typedef struct {
  Vector2 position;
  Color color;
  float size;
} Pertti;

void drawPertti(Pertti *new_pertti);
Pertti * createPertti(Vector2 position, Color color, float size);

#endif
