#include <stdio.h>

// Function to find GCD of two numbers
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to calculate Euler's Totient Function
int phi(int n)
{
    int result = 1; // 1 is always relatively prime to any n > 1
    for (int i = 2; i < n; i++)
    {
        if (gcd(i, n) == 1)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Euler's Totient Number phi(%d) = %d\n", n, phi(n));

    return 0;
}