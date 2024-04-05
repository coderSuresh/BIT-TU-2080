#include <stdio.h>

int *fun(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr[i] * arr[i];
    }

    return arr;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *square_arr = fun(arr);

    printf("Square of array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(square_arr + i));
    }

    return 0;
}