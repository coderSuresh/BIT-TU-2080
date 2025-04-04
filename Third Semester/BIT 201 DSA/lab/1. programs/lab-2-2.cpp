#include <stdio.h>
int main() {
    int arr[10];
    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\nSmallest Number: %d", min);
    printf("\nLargest Number: %d", max);

    return 0;
}
