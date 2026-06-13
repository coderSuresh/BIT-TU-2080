#include <stdio.h>
#include <string.h>

int main()
{
    char plaintext[] = "SURESH";
    char key[] = "XMCKLZ"; // Key must be random and same length
    int len = strlen(plaintext);
    char ciphertext[len + 1], decrypted[len + 1];
    int i;

    printf("Plaintext: %s\n", plaintext);
    printf("Key:       %s\n\n", key);

    // --- Encryption ---
    for (i = 0; i < len; i++)
    {
        int p = plaintext[i] - 'A';
        int k = key[i] - 'A';

        // (P + K) mod 26
        ciphertext[i] = ((p + k) % 26) + 'A';
    }
    ciphertext[len] = '\0';
    printf("Ciphertext: %s\n", ciphertext);

    // --- Decryption ---
    for (i = 0; i < len; i++)
    {
        int c = ciphertext[i] - 'A';
        int k = key[i] - 'A';

        // (C - K + 26) mod 26
        decrypted[i] = ((c - k + 26) % 26) + 'A';
    }
    decrypted[len] = '\0';
    printf("Decrypted:  %s\n", decrypted);

    return 0;
}