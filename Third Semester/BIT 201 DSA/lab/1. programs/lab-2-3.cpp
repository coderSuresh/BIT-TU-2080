#include <stdio.h>
#define MAX 100

int main() {
    int arr[MAX], n, choice, pos, value, i;
    int found;  // Declare 'found' outside the switch
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n2. Delete\n3. Traverse\n4. Search\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: // Insert
                if (n == MAX) {
                    printf("Array is full! Cannot insert.\n");
                    break;
                }
                printf("Enter position (0 to %d) and value: ", n);
                scanf("%d %d", &pos, &value);
                if (pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    for (i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                    printf("Value inserted successfully.\n");
                }
                break;
            case 2: // Delete
                printf("Enter position (0 to %d) to delete: ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                } else {
                    for (i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Value deleted successfully.\n");
                }
                break;
            case 3: // Traverse
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 4: // Search
                printf("Enter value to search: ");
                scanf("%d", &value);
                found = 0;  // Initialize 'found' before the loop
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Value found at index %d\n", i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Value not found in array.\n");
                }
                break;
            case 5: // Exit
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
