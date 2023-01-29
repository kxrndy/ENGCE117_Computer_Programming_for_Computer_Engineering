#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value ;
  struct node *link ;
}NODE ;

int main(){
NODE *p , *h=NULL , *pp=NULL ;
int menu,s;
do{
  printf("1: Add\n") ;
  printf("2: Delete\n") ;
  printf("3: Edit\n") ;
  printf("4: Search\n") ;
  printf("5: Show\n") ;
  printf("6: Exit\n") ;
  printf("Enter Menu: ") ; scanf("%d",&menu) ;

  if(menu==1){ //Add
    p = (NODE *)malloc(sizeof(NODE));
    printf("Enter value: ") ; scanf("%d",&p->value) ;
    p->link = h ;
    h = p ;
  } else if(menu==2){ //Delete
    printf("Delete for: ") ; scanf("%d",&s) ;
    p = h ;
    while(p != NULL &&p->value != s){
      p = p->link ;
    }
    if (p == NULL) printf("No Data!\n") ;
    else{
      if(p == h) h = h->link ;
      else{
        pp = h ;
        while(pp->link != p) pp = pp->link ;
        pp->link = p->link ;
      }
      free(p) ;
      printf("Delete Complete!\n") ;
    }
  } else if(menu==3){ //Edit
    printf("Edit for: ") ; scanf("%d",&s) ;
    p = h ;
    while(p != NULL && p->value != s){
      p = p->link ;
    } if (p == NULL) printf("Data not found!!!\n") ;
    else {
      printf("Edit to: ") ; scanf("%d",&p->value) ;
      printf("Edit Complete!\n") ;
    }
  } else if(menu==4){ //Search 
    printf("Search for: ") ; scanf("%d",&s) ;
    p = h ;
    while(p != NULL && p->value != s){
      p = p->link ;
    } if (p == NULL) printf("Data not found!!!\n") ;
    else printf("Found!\n") ;

  } else if(menu==5){ //Show
    p = h ;
    while(p != NULL){
      printf("%d\n", p->value) ;
      p = p->link ;
    }
  } else if(menu==6){ //Exit
    printf("Exit!!!\n") ;

  } else printf("Please enter 1-6 only!!!\n") ;

  }while(menu!=6);
}