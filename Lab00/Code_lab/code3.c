#include <stdio.h>
int main() {
  printf (" ride a bike to market\n ") ;
  printf (" on the road traffic\n ") ;
  printf (" Road car full?\n ") ;
  char roadcarfull[20] ;
  if (strcmp(roadcarfull, " NO ") == 0 ) {
    printf (" ride a normal\n") ;
  }
  else {
    printf (" rush on the road\n ") ;
  }
}