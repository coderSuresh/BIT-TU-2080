#include <stdio.h>

int main()
{
    // 1. Setup
    int key[2][2] = {{7, 3}, {7, 4}};
    char word[] = "GOOD";
    int p[2], c[2]; // p = plain vector, c = cipher vector
    int i, j;

    // 2. Calculate Determinant: (ad - bc)
    int det = (key[0][0] * key[1][1]) - (key[0][1] * key[1][0]);
    det = det % 26;

    // 3. Find Modular Inverse of Determinant (det * x % 26 == 1)
    int det_inv = 0;
    for (i = 0; i < 26; i++)
    {
        if ((det * i) % 26 == 1)
        {
            det_inv = i;
            break;
        }
    }

    // 4. Create the Inverse Key Matrix (Adjugate * det_inv % 26)
    int invKey[2][2];
    invKey[0][0] = (key[1][1] * det_inv) % 26;
    invKey[0][1] = ((-key[0][1] + 26) * det_inv) % 26;
    invKey[1][0] = ((-key[1][0] + 26) * det_inv) % 26;
    invKey[1][1] = (key[0][0] * det_inv) % 26;

    printf("--- HILL CIPHER CALCULATION ---\n");
    printf("Step 1: Key Matrix is [[%d, %d], [%d, %d]]\n", key[0][0], key[0][1], key[1][0], key[1][1]);
    printf("Step 2: Determinant = %d, Modular Inverse = %d\n\n", det, det_inv);

    // --- ENCRYPTION ---
    printf("--- ENCRYPTION ---\n");
    for (i = 0; i < 4; i += 2)
    {
        p[0] = word[i] - 'A';
        p[1] = word[i + 1] - 'A';

        for (j = 0; j < 2; j++)
        {
            // Formula: (K11*P1 + K12*P2) % 26
            int sum = (key[j][0] * p[0] + key[j][1] * p[1]);
            c[j] = sum % 26;
            printf("Calculation for %c: (%d*%d + %d*%d) mod 26 = %d (%c)\n",
                   word[i + j], key[j][0], p[0], key[j][1], p[1], c[j], c[j] + 'A');
        }
        word[i] = c[0] + 'A';
        word[i + 1] = c[1] + 'A';
        printf("Resulting Block: %c%c\n\n", word[i], word[i + 1]);
    }

    // --- DECRYPTION ---
    printf("--- DECRYPTION ---\n");
    for (i = 0; i < 4; i += 2)
    {
        c[0] = word[i] - 'A';
        c[1] = word[i + 1] - 'A';

        for (j = 0; j < 2; j++)
        {
            // Formula: (InvK11*C1 + InvK12*C2) % 26
            int sum = (invKey[j][0] * c[0] + invKey[j][1] * c[1]);
            int res = sum % 26;
            printf("Calculation for %c: (%d*%d + %d*%d) mod 26 = %d (%c)\n",
                   word[i + j], invKey[j][0], c[0], invKey[j][1], c[1], res, res + 'A');
        }
        printf("\n");
    }

    return 0;
}