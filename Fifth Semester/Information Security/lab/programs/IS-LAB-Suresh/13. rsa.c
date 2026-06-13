#include <stdio.h>
#include <math.h>

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

// Function to find GCD
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    // 1. Choose two prime numbers
    long long p = 3, q = 11;
    long long n = p * q;
    long long phi = (p - 1) * (q - 1);

    // 2. Choose e such that gcd(e, phi) = 1
    long long e = 7;
    while (e < phi)
    {
        if (gcd(e, phi) == 1)
            break;
        else
            e++;
    }

    // 3. Calculate d (Modular Inverse of e)
    // Simple loop for small values; use Extended Euclidean for large values
    long long d = 0;
    for (long long i = 1; i < phi; i++)
    {
        if ((e * i) % phi == 1)
        {
            d = i;
            break;
        }
    }

    long long msg = 65; // Original Message
    printf("Original Message: %lld\n", msg);
    printf("Public Key (e, n): (%lld, %lld)\n", e, n);
    printf("Private Key (d, n): (%lld, %lld)\n\n", d, n);

    // Encryption: C = (msg^e) % n
    long long c = power(msg, e, n);
    printf("Encrypted Message (Ciphertext): %lld\n", c);

    // Decryption: M = (c^d) % n
    long long m = power(c, d, n);
    printf("Decrypted Message (Plaintext): %lld\n", m);

    return 0;
}