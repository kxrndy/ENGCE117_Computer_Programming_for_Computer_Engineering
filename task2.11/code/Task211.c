#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  int a;
  int b = 9;
  int c = 0;
  printf("User Intput : ") ;
  scanf("%d", &a) ;
  printf("----") ;
  printf("\nSeries : ") ;

  for (int i = 0 ; i < a ; i++) {
    c += b ;
    if (i != 0) {
      printf("+") ;
    } // end if (i != 0)
    printf("%d", b) ;
    b = b*10 + 9 ;
  } // end for loop
    printf ("\nsum = %'d", c) ;
  return 0 ;
}