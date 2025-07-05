#include <stdio.h>

#define N 3

int main() {
    float A[N][N] = {
        {2, -1, 1},
        {3, 3, 9},
        {3, 3, 5}
    };
    float b[N] = {8, 0, -6};
    float x[N];
    int i, j, k;

    // Forward elimination
    for (k = 0; k < N - 1; k++) {
        for (i = k + 1; i < N; i++) {
            float factor = A[i][k] / A[k][k];
            for (j = k; j < N; j++)
                A[i][j] -= factor * A[k][j];
            b[i] -= factor * b[k];
        }
    }

    // Back substitution
    for (i = N - 1; i >= 0; i--) {
        x[i] = b[i];
        for (j = i + 1; j < N; j++)
            x[i] -= A[i][j] * x[j];
        x[i] /= A[i][i];
    }

    printf("Solution:\n");
    for (i = 0; i < N; i++)
        printf("x[%d] = %.4f\n", i, x[i]);

    return 0;
}
