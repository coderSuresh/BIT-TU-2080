#include <stdio.h>

// Function to implement sequential search
int sequentialSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i; // Return the index where target is found 
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
  int arr[] = {4,2,0,1,3}; 
  int size = sizeof(arr) / sizeof(arr[0]);
  int target;

  printf("Enter the target value: ");
  scanf("%d", & target);

  int result = sequentialSearch(arr, size, target);

  if (result != -1) {
    printf("Element found at index %d\n", result);
  } else {
    printf("Element not found in the array\n");
  }

  return 0;
}
