#include <stdio.h>
struct student_data {
    int age;
    int y;
}; typedef struct student_data stds ;

int main(){
  stds boy ;
  boy.age = 16;
  printf ("%d\n", boy.age);
  return 0 ;
}