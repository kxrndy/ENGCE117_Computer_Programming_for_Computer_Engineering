#include <stdio.h>

int main() {
  int a = 5 ;
  int b = 10 ;

  // Declare a pointer to an integer
  int *p ;

  // Store the address of a in p
  p = &a ;

  // Print the value stored in a using the pointer
  printf("%d\n", *p) ;

  // Change the value stored in a using the pointer
  *p = 7 ;
  printf("%d\n", a) ;

  // Store the address of b in p
  p = &b ;

  // Print the value stored in b using the pointer
  printf("%d\n", *p) ;

  return 0 ;
}
