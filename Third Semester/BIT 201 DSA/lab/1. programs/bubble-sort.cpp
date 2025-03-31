#include <stdio.h>

void bubbleSort(int arr[], int n) {
  int swapped;
  for (int i = 0; i < n - 1; i++) {
    swapped = 0;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // Swap elements     
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = 1;
      }
    }
    // Early termination if no swaps 
    if (swapped == 0) break;
  }
}

int main() {
  int arr[] = {
    4,
    2,
    0,
    1,
    3
  };
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  bubbleSort(arr, n);

  printf("\nSorted array: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}
