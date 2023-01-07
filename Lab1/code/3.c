#include <stdio.h>

int *find_max(int *arr, int size) {
  int *max = arr;
  for (int i = 1; i < size; i++) {
    if (arr[i] > *max) {
      max = &arr[i];
    }
  }
  return max;
}

int main() {
  int arr[] = {1, 3, 2, 4, 5};
  int *max = find_max(arr, 5);
  printf("%d\n", *max);  // prints 5
  return 0;
}
