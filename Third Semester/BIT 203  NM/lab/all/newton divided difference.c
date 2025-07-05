#include <stdio.h>

#define MAX 10

int main() {
    int n = 4;
    float x[] = {5, 6, 9, 11};
    float y[] = {12, 13, 14, 16};  // Example values
    float xp = 7, dd[MAX][MAX], result, term;

    for(int i = 0; i < n; i++)
        dd[i][0] = y[i];

    for(int j = 1; j < n; j++)
        for(int i = 0; i < n - j; i++)
            dd[i][j] = (dd[i+1][j-1] - dd[i][j-1]) / (x[i+j] - x[i]);

    result = dd[0][0];
    for(int i = 1; i < n; i++) {
        term = dd[0][i];
        for(int j = 0; j < i; j++)
            term *= (xp - x[j]);
        result += term;
    }

    printf("Interpolated value at x = %.2f is %.4f\n", xp, result);
    return 0;
}
