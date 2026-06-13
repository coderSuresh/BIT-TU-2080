#include <stdio.h>

// Function for Modular Exponentiation: (base^exp) % mod
long long power(long long base, long long exp, long long mod)
{
    long long res = 1;
    base = base % mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return res;
}

// Function to check GCD
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int a, p;

    printf("Enter an integer (a): ");
    scanf("%d", &a);
    printf("Enter a prime number (p): ");
    scanf("%d", &p);

    // Check if a and p are relatively prime
    if (gcd(a, p) != 1)
    {
        printf("Error: a and p must be relatively prime (gcd=1).\n");
    }
    else
    {
        long long result = power(a, p - 1, p);

        printf("\nVerification of Fermat's Little Theorem:\n");
        printf("%d^(%d-1) mod %d = %lld\n", a, p, p, result);

        if (result == 1)
        {
            printf("Result is 1. Theorem holds true.\n");
        }
        else
        {
            printf("Theorem failed (p might not be prime).\n");
        }
    }

    return 0;
}