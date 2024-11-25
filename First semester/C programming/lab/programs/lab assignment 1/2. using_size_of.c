#include <stdio.h>

int main()
{
    char name[20];

    printf("Size of char: %ld\n", sizeof(char));
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of float: %ld\n", sizeof(float));
    printf("Size of double: %ld\n", sizeof(double));
    printf("Size of long: %ld\n", sizeof(long));
    printf("Size of long long: %ld\n", sizeof(long long));
    printf("Size of long double: %ld\n", sizeof(long double));
    printf("Size of name string: %ld\n", sizeof(name));

    return 0;
}
