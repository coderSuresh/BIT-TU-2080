#include <stdio.h>
int main() {
    int n;
        printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], sum[n];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    printf("\nFirst Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\nSum Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    return 0;
}
