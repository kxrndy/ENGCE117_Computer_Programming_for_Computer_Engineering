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
void Swap( NODE **start , int data1 , int data2 ) ;

int main() {
  NODE *start = NULL ;
  AddNode( &start, 10 ) ;
  AddNode( &start, 20 ) ;
  AddNode( &start, 30 ) ;
  AddNode( &start, 40 ) ;
  ShowAll(start) ; //10, 20, 30, 40
  Swap(&start, 20, 30) ;
  ShowAll(start) ; //10, 30, 20, 40
  Swap(&start, 40, 10) ;
  ShowAll(start) ; //40, 30, 20, 10
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

void SwapNode (NODE **D1 , NODE **D2 ) {
  NODE *temp = *D1 ;
  *D1 = *D2 ;
  *D2 = temp ;
}

void Swap( NODE **start, int data1, int data2 ) {
  if ( data1 == data2 ) return ;

  NODE **D1 = start ;
    while( *D1 != NULL && ( *D1 )->value != data1 ) D1 = &( *D1 )->link ;

  NODE **D2 = start ;
  while( *D2 != NULL && ( *D2 )->value != data2 ) D2 = &( *D2 )->link ;

  if( D1 && D2 ) {
    SwapNode( D1, D2 ) ;
    SwapNode( &( *D1 )->link, &( *D2 )->link ) ; 
  }
}