#include <stdio.h>

// Function to partition the array 
int partition(int arr[], int low, int high) {
  int pivot = arr[high]; // Choose the last element as the pivot    
  int i = (low - 1); // Index of smaller element 

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) { // If current element is smaller than the pivot     
      i++;
      // Swap arr[i] and arr[j] 
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  // Swap the pivot element with arr[i + 1] to place it in the correct position     
  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return (i + 1); // Return the pivot index 
}

// Function to perform quick sort
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high); // Partitioning index 

    // Recursively sort the two subarrays         
    quickSort(arr, low, pi - 1); // Left of pivot        
    quickSort(arr, pi + 1, high); // Right of pivot 
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
  int arr[] = {4,2,0,1,3};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  printArray(arr, n);

  quickSort(arr, 0, n - 1);

  printf("Sorted array: ");
  printArray(arr, n);

  return 0;
}
