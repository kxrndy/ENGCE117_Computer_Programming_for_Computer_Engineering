#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  int x = 5;
  int y = 10;
  printf("x = %d, y = %d\n", x, y);  // prints "x = 5, y = 10"
  swap(&x, &y);
  printf("x = %d, y = %d\n", x, y);  // prints "x = 10, y = 5"
  return 0;
}
