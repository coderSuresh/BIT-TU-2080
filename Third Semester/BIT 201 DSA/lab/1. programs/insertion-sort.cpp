#include <stdio.h>

// Recursive function to perform insertion sort 
void insertionSort(int arr[], int n) {
  // Base case: if there is only one element or no elements, return  
  if (n <= 1) {
    return;
  }

  // Sort first n-1 elements 
  insertionSort(arr, n - 1);

  // Insert the nth element in the sorted part of the array  
  int last = arr[n - 1];
  int j = n - 2;

  while (j >= 0 && arr[j] > last) {
    arr[j + 1] = arr[j];
    j--;
  }
  arr[j + 1] = last;
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
    4,
    2,
    0,
    1,
    3
  };
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  printArray(arr, n);

  insertionSort(arr, n);

  printf("Sorted array: ");
  printArray(arr, n);

  return 0;
}
