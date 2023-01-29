#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value ;
  struct node *link ;
} NODE ;

int main() {
NODE a, b, c ;
a.value = 1 ;
b.value = 2 ;
c.value = 3 ;
a.link = b.link = c.link = NULL ;

a.link = &b ;
b.link = &c ;
c.link = &a ;

printf("A :  %d\n", a.value);
printf("B :  %d\n", a.link->value);
printf("C :  %d\n", a.link->link->value);
return 0 ;
}