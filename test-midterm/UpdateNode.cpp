// นาย กรณ์ดนัย ศรีสุริยานุรักษ์
// https://youtu.be/05Xe4QwM6qQ

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
  int value ;
  struct node *link ; 
} NODE ;

void ShowAll(NODE *start) ;
void AddNode(NODE **start , int value) ;
void Update(NODE **start , int find , int edit ) ;

int main() {
  NODE *start = NULL ;
  AddNode( &start, 10 ) ;
  AddNode( &start, 20 ) ;
  AddNode( &start, 30 ) ;
  AddNode( &start, 40 ) ;
  ShowAll( start) ; //10, 20, 30, 40
  Update( &start, 10, 99 ) ;
  ShowAll( start) ; //99, 20, 30, 40
  Update( &start, 10, 98 ) ;
  ShowAll( start) ; //99, 20, 30, 40
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

void Update(NODE **start , int find , int edit ){
  NODE *temp = *start ;
  while(temp != NULL && temp->value != find){
      temp = temp->link ;
    } if (temp != NULL) temp->value = edit ;
}