#include<stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = arr;
    // int *ptr = &arr[0]; // Both are same
    // array name is a pointer to the first element of the array

    // arr[i] = *(arr + i) = *(ptr + i) = ptr[i]
    
    printf("Value of arr[0]: %d\n", *ptr);
    printf("Value of arr[1]: %d\n", *(ptr + 1));
    printf("Value of arr[2]: %d\n", ptr[2]);
    printf("Value of arr[3]: %d\n", *(ptr + 3));
    printf("Value of arr[4]: %d\n", *(ptr + 4));

    return 0;
}