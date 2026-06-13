#include <stdio.h>

// Function to find the modular inverse
int extendedGCD(int a, int n) {
    int m0 = n, t, q;
    int x0 = 0, x1 = 1;

    if (n == 1) return 0;

    while (a > 1) {
        // q is quotient
        q = a / n;
        t = n;

        // n is remainder now, process same as Euclid's algo
        n = a % n;
        a = t;
        t = x0;

        x0 = x1 - q * x0;
        x1 = t;
    }

    // Make x1 positive
    if (x1 < 0) x1 += m0;

    return x1;
}

int main() {
    int a = 11, n = 26;
    
    printf("Finding Multiplicative Inverse of %d mod %d...\n", a, n);
    
    int inverse = extendedGCD(a, n);
    
    printf("The Multiplicative Inverse is: %d\n", inverse);
    printf("Check: (%d * %d) %% %d = %d\n", a, inverse, n, (a * inverse) % n);

    return 0;
}