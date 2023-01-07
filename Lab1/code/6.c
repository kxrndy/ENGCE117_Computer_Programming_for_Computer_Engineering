#include <stdio.h>

int add_one(int n) {
  n += 1;
  return n;
}

int main() {
  int x = 5;
  int y = add_one(x);
  printf("x = %d, y = %d\n", x, y);  // prints "x = 5, y = 6"
  return 0;
}
