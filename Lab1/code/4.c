#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *data;
  int size;
  int capacity;
} DynamicArray;

void init(DynamicArray *a, int capacity) {
  a->data = malloc(capacity * sizeof(int));
  a->size = 0;
  a->capacity = capacity;
}

void append(DynamicArray *a, int x) {
  if (a->size == a->capacity) {
    a->capacity *= 2;
    a->data = realloc(a->data, a->capacity * sizeof(int));
  }
  a->data[a->size] = x;
  a->size++;
}

void free_array(DynamicArray *a) {
  free(a->data);
  a->data = NULL;
  a->size = 0;
  a->capacity = 0;
}

int main() {
  DynamicArray a;
  init(&a, 2);
  append(&a, 1);
  append(&a, 2);
  append(&a, 3);
  for (int i = 0; i < a.size; i++) {
    printf("%d ", a.data[i]);
  }
  printf("\n");  // prints 1 2 3
  free_array(&a);
  return 0;
}
