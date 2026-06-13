#include <stdio.h>
#include <math.h>

// Function to calculate (base^exp) % mod
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

int isPrimitiveRoot(int g, int P)
{
    int values[P];
    for (int i = 0; i < P; i++)
        values[i] = 0;

    long long current = 1;
    for (int i = 1; i < P; i++)
    {
        current = (current * g) % P;
        if (values[current] == 1)
            return 0; // If value repeats, not a primitive root
        values[current] = 1;
    }
    return 1;
}

int main()
{
    int P = 7; // Example prime number
    printf("Primitive roots of %d are: ", P);

    for (int g = 2; g < P; g++)
    {
        if (isPrimitiveRoot(g, P))
        {
            printf("%d ", g);
        }
    }
    printf("\n");

    return 0;
}