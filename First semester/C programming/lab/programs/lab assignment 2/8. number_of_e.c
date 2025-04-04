#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'e')
        {
            count++;
        }
    }

    printf("The number of 'e' in the string is: %d\n", count);
    
    return 0;
}