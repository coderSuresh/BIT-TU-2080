#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) {
  int minIndex, temp;

  // Move through the entire array   
  for (int i = 0; i < n - 1; i++) {
    // Find the smallest element in the unsorted part of the array     
    minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    // Swap the found smallest element with the first element of the unsorted part      
    if (minIndex != i) {
      temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}

// Function to print the array
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {
    5,
    1,
    4,
    2,
    8
  };
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  printArray(arr, n);

  selectionSort(arr, n);
  printf("Sorted array: ");
  printArray(arr, n);

  return 0;
}
