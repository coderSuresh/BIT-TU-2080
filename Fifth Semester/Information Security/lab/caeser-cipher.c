#include <stdio.h>

int main()
{
    char message[100], messages[100], ch;
    int i, key = 3;

    printf("Enter a message: ");
    gets(message);

    for (i = 0; message[i] != '\0'; i++)
    {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;

            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }

            messages[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;

            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }

            messages[i] = ch;
        }
        else
        {
            messages[i] = ch;
        }
    }

    messages[i] = '\0';

    printf("Encrypted message: %s", messages);

    return 0;
}