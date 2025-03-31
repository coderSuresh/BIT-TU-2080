#include <stdio.h>

// Function to implement binary search 
int binarySearch(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    // Check if the target is present at mid         
    if (arr[mid] == target) {
      return mid; // Target found, return the index 
    }

    // If target is smaller than mid, it is in the left subarray    
    if (arr[mid] > target) {
      right = mid - 1;
    }
    // If target is larger than mid, it is in the right subarray    
    else {
      left = mid + 1;
    }
  }

  return -1; // Target not found 
}

// Function to print the array 
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {0,1,2,3,4}; 
  int size = sizeof(arr) / sizeof(arr[0]);
  int target;

  printf("Enter the target value: ");
  scanf("%d", & target);

  int result = binarySearch(arr, size, target);

  if (result != -1) {
    printf("Element found at index %d\n", result);
  } else {
    printf("Element not found in the array\n");
  }
  return 0;
}
