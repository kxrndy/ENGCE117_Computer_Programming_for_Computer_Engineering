// นาย กรณ์ดนัย ศรีสุริยานุรักษ์
// https://youtu.be/05Xe4QwM6qQ

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
  int value ;
  struct node *link ; 
} NODE ;

void ShowAll( NODE *start ) ;
void AddNode( NODE **start , int value ) ;
void Update( NODE **start , int find , int edit ) ;
void ShowBack (NODE *start ) ;

int main() {
  NODE *start = NULL ;
  AddNode( &start, 10 ) ;
  AddNode( &start, 20 ) ;
  AddNode( &start, 30 ) ;
  AddNode( &start, 40 ) ;
  ShowAll(start) ; //10, 20, 30, 40
  ShowBack(start) ; //40, 30, 20, 10
}

void ShowAll( NODE *start ) {
    while(start != NULL){
      printf("%d ", start->value) ;
      start = start->link ;
    } printf("\n") ;
}

void AddNode(NODE **start , int value) {
  NODE* new_node = (NODE *)malloc(sizeof(NODE));
  new_node->value = value ;
  new_node->link = (*start) ;
  (*start) = new_node ;
}

void ShowBack (NODE *start ){
  NODE *temp = NULL , *pre = NULL ;
  NODE *cur = start ;
  while ( cur != NULL) {
    temp = cur->link ;
    cur->link = pre ;
    pre = cur ;
    cur = temp  ;
  }
  start = pre ;
  ShowAll (start) ;
}