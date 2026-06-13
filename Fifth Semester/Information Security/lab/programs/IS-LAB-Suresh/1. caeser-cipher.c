#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char text[], int key)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        char ch = text[i];

        if (isalpha(ch))
        {
            char base = islower(ch) ? 'a' : 'A';
            text[i] = (ch - base + key) % 26 + base;
        }
    }
}

void decrypt(char text[], int key)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        char ch = text[i];

        if (isalpha(ch))
        {
            char base = islower(ch) ? 'a' : 'A';
            text[i] = (ch - base - key + 26) % 26 + base;
        }
    }
}

int main()
{
    char text[100];
    int key, choice;

    printf("Enter message: ");
    gets(text);

    printf("Enter key: ");
    scanf("%d", &key);

    printf("1. Encrypt\n2. Decrypt\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        encrypt(text, key);
        printf("Encrypted message: %s", text);
    }
    else if (choice == 2)
    {
        decrypt(text, key);
        printf("Decrypted message: %s", text);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}