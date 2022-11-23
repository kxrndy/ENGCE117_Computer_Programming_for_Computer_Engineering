#include <stdio.h>
int main() {
  char wakeup [30] ;
  printf("wake up? \n");
  scanf("%s", wakeup) ;

  if (strcmp(wakeup, "No") == 0)
  {
    printf ("wake up!\n") ;
  }
  else {
    printf ("Go to the bathroom\n") ;
    printf ("Get attire\n") ;
    printf ("go to school\n") ;
  }
}