#include <stdio.h>

#define MAX 10

int main() {
    int n = 4;
    float x[] = {1, 2, 3, 4};
    float y[MAX][MAX], xp = 2.5, h, p, yp;
    
    for(int i = 0; i < n; i++)
        y[i][0] = x[i]*x[i];  // Example: y = x^2

    for(int j = 1; j < n; j++)
        for(int i = 0; i < n - j; i++)
            y[i][j] = y[i+1][j-1] - y[i][j-1];

    h = x[1] - x[0];
    p = (xp - x[0]) / h;
    yp = y[0][0];

    float fact = 1, pterm = 1;
    for(int i = 1; i < n; i++) {
        pterm *= (p - i + 1);
        fact *= i;
        yp += (pterm * y[0][i]) / fact;
    }

    printf("Interpolated value at x = %.2f is %.4f\n", xp, yp);
    return 0;
}
