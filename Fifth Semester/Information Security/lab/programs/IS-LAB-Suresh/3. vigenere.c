#include <stdio.h>
#include <string.h>

int main()
{
    char message[] = "NOCHEATING";
    char key[] = "EXAM";
    int msgLen = strlen(message);
    int keyLen = strlen(key);
    char cipher[20], decrypted[20];
    int i;

    // --- Encryption ---
    for (i = 0; i < msgLen; i++)
    {
        // Convert to 0-25 range
        int p = message[i] - 'A';
        int k = key[i % keyLen] - 'A';

        // (P + K) mod 26
        cipher[i] = ((p + k) % 26) + 'A';
    }
    cipher[msgLen] = '\0';

    // --- Decryption ---
    for (i = 0; i < msgLen; i++)
    {
        int c = cipher[i] - 'A';
        int k = key[i % keyLen] - 'A';

        // (C - K + 26) mod 26
        decrypted[i] = ((c - k + 26) % 26) + 'A';
    }
    decrypted[msgLen] = '\0';

    // Output Result
    printf("Plaintext:  %s\n", message);
    printf("Keyword:    %s\n", key);
    printf("Ciphertext: %s\n", cipher);
    printf("Decrypted:  %s\n", decrypted);

    return 0;
}