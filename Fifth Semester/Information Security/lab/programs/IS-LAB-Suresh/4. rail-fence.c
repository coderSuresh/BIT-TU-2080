#include <stdio.h>
#include <string.h>

int main()
{
    char msg[] = "SURESH"; // Spaces removed for simplicity
    int k = 3;             // Let's assume fence size k = 3
    int msgLen = strlen(msg);
    char rail[k][msgLen];
    int i, j, row, check;

    // Initialize rail matrix with a placeholder
    for (i = 0; i < k; i++)
        for (j = 0; j < msgLen; j++)
            rail[i][j] = '\n';

    // --- ENCRYPTION ---
    row = 0;
    check = 0; // 0 for down, 1 for up
    for (i = 0; i < msgLen; i++)
    {
        rail[row][i] = msg[i];

        if (row == 0)
            check = 0;
        else if (row == k - 1)
            check = 1;

        if (check == 0)
            row++;
        else
            row--;
    }

    printf("Ciphertext: ");
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < msgLen; j++)
        {
            if (rail[i][j] != '\n')
                printf("%c", rail[i][j]);
        }
    }

    // --- DECRYPTION ---
    // In a transposition cipher, we fill the rails with placeholders
    // and then re-read them in the original zigzag order.
    printf("\nDecrypted: ");
    row = 0;
    check = 0;
    for (i = 0; i < msgLen; i++)
    {
        printf("%c", rail[row][i]);

        if (row == 0)
            check = 0;
        else if (row == k - 1)
            check = 1;

        if (check == 0)
            row++;
        else
            row--;
    }
    printf("\n");

    return 0;
}