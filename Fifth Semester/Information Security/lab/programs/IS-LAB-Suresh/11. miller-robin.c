#include <stdio.h>
#include <stdlib.h>

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

// Miller-Rabin Test
int millerRabin(long long n, int k)
{
    if (n <= 1 || n == 4)
        return 0;
    if (n <= 3)
        return 1;

    // Find d such that n - 1 = 2^s * d
    long long d = n - 1;
    int s = 0;
    while (d % 2 == 0)
    {
        d /= 2;
        s++;
    }

    // Run the test k times for accuracy
    for (int i = 0; i < k; i++)
    {
        long long a = 2 + rand() % (n - 4);
        long long x = power(a, d, n);

        if (x == 1 || x == n - 1)
            continue;

        int composite = 1;
        for (int r = 1; r < s; r++)
        {
            x = (x * x) % n;
            if (x == n - 1)
            {
                composite = 0;
                break;
            }
        }
        if (composite)
            return 0; // Definitely composite
    }
    return 1; // Probably prime
}

int main()
{
    long long n;
    int k = 5; // Iterations

    printf("Enter an odd integer: ");
    scanf("%lld", &n);

    if (n % 2 == 0 && n != 2)
    {
        printf("%lld is Composite.\n", n);
    }
    else if (millerRabin(n, k))
    {
        printf("%lld is Probably Prime (Inconclusive).\n", n);
    }
    else
    {
        printf("%lld is Composite.\n", n);
    }

    return 0;
}