#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value ;
  struct node *link ;
} NODE ;

int main() {
  NODE *p ;
  p = (NODE *)malloc(sizeof(NODE)) ;
  p->value = 10 ;
  p->link = NULL ;

  printf("%d\n", p->value) ;
  free(p);
} 