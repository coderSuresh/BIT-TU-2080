#include <stdio.h>

// Function to merge two halves of the array 
void merge(int arr[], int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;

  // Create temporary arrays     
  int leftArr[n1], rightArr[n2];

  // Copy data to temporary arrays
  for (int i = 0; i < n1; i++) 
      leftArr[i] = arr[left + i];
  for (int j = 0; j < n2; j++) 
      rightArr[j] = arr[mid + 1 + j];

  int i = 0, j = 0, k = left;

  // Merge the temporary arrays back into the original array    
  while (i < n1 && j < n2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of leftArr[] if any     
  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  // Copy the remaining elements of rightArr[] if any    
  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

// Function to perform merge sort
void mergeSort(int arr[], int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;

    // Recursively sort the first and second halves         
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the sorted halves    
    merge(arr, left, mid, right);
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

  mergeSort(arr, 0, n - 1);
  printf("Sorted array: ");
  printArray(arr, n);
  return 0;
}
