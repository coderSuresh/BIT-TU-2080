#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        if (n % 2 == 0)
        {
            printf("%d is positive even\n", n);
        }
        else
        {
            printf("%d is positive odd\n", n);
        }
    }
    else
    {
        if (n % 2 == 0)
        {
            printf("%d is negative even\n", n);
        }
        else
        {
            printf("%d is negative odd\n", n);
        }
    }

    return 0;
}