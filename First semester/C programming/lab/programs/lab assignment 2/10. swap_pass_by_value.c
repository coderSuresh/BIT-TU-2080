#include<stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swapping inside a swap function a = %d and b = %d\n", a, b);
}

int main()
{
    int a, b, temp;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping a = %d and b = %d\n", a, b);
    swap(a, b);
    printf("After swapping a = %d and b = %d\n", a, b);
    return 0;
}