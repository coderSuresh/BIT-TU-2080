#include <stdio.h>

// Function for Modular Exponentiation: (base^exp) % mod
long long power(long long base, long long exp, long long mod)
{
    long long res = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int main()
{
    // RSA Key Setup (Simplified)
    long long p = 3, q = 11;
    long long n = p * q;               // Modulus n = 33
    long long phi = (p - 1) * (q - 1); // 20
    long long e = 7;                   // Public Key exponent
    long long d = 3;                   // Private Key exponent (since 7*3 % 20 = 1)

    // The message (usually a hash of the actual document)
    long long M = 14;

    printf("Original Message (M): %lld\n", M);
    printf("Public Key (e, n): (%lld, %lld)\n", e, n);
    printf("Private Key (d, n): (%lld, %lld)\n\n", d, n);

    // --- SIGNING ---
    // Signature S = M^d mod n (Sender uses Private Key)
    long long S = power(M, d, n);
    printf("Digital Signature (S) created: %lld\n", S);

    // --- VERIFICATION ---
    // Receiver calculates M' = S^e mod n (Using Sender's Public Key)
    long long M_prime = power(S, e, n);
    printf("Decrypted value from signature: %lld\n\n", M_prime);

    if (M_prime == M)
    {
        printf("Verification SUCCESS: The signature is valid and authentic.\n");
    }
    else
    {
        printf("Verification FAILED: The signature or message has been tampered with.\n");
    }

    return 0;
}