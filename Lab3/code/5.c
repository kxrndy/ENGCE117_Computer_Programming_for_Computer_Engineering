#include <stdio.h>

typedef struct {
  int x;
  int y;
} Point;

void move_point(Point *p, int dx, int dy) {
  p->x += dx;
  p->y += dy;
}

int main() {
  Point p = {1, 2};
  move_point(&p, 3, 4);
  printf("Point is at (%d, %d)\n", p.x, p.y);  // Outputs: Point is at (4, 6)
  return 0;
}