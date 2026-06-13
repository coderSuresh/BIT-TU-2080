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
    long long q, g, Xa, Xb, Ya, Yb, Ka, Kb;

    // Publicly shared values (q is prime, g is primitive root)
    q = 23;
    g = 5;
    printf("Publicly Shared Prime (q): %lld\n", q);
    printf("Publicly Shared Root (g): %lld\n\n", g);

    // Private keys (kept secret by each party)
    Xa = 6;
    Xb = 15;
    printf("User A Private Key (Xa): %lld\n", Xa);
    printf("User B Private Key (Xb): %lld\n\n", Xb);

    // Generate Public Values
    Ya = power(g, Xa, q);
    Yb = power(g, Xb, q);
    printf("User A Public Value (Ya): %lld\n", Ya);
    printf("User B Public Value (Yb): %lld\n\n", Yb);

    // Calculate Shared Secret Key
    Ka = power(Yb, Xa, q);
    Kb = power(Ya, Xb, q);

    printf("Secret Key calculated by User A: %lld\n", Ka);
    printf("Secret Key calculated by User B: %lld\n", Kb);

    if (Ka == Kb)
    {
        printf("\nSuccess: Shared Private Key established!\n");
    }

    return 0;
}