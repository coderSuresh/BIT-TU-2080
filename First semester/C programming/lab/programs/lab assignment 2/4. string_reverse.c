#include <stdio.h>
#include <string.h>

void reverse(char *string, int length)
{
    for (int i = 0; i < length; i++)
    {
        char temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }

    printf("The reverse of the string is: %s\n", string);
}

void find_length(char *string)
{
    int length = 0;
    while (string[length] != '\0')
    {
        length++;
    }
    printf("The length of the string is: %d\n", length);
}

int main()
{
    char string[40];

    printf("Enter a string: ");
    fgets(string, 40, stdin);

    // length using library function
    int length = strlen(string);
    printf("The length of the string using library function is: %d\n", length);

    // length using custom function
    find_length(string);

    // reverse of string using library function
    printf("The reverse of the string using library function is: %s\n", strrev(string));

    // reverse of string using custom function
    reverse(string, length);

    return 0;
}
