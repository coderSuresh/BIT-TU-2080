#include <stdio.h>
#include <math.h>

#define N 3

int main() {
    float A[N][N] = {
        {25, 15, -5},
        {15, 18,  0},
        {-5,  0, 11}
    };
    float B[N] = {35, 33, 6};
    float L[N][N] = {0}, Y[N], X[N];

    // Step 1: Cholesky decomposition (A = L * L^T)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            float sum = 0;
            for (int k = 0; k < j; k++)
                sum += L[i][k] * L[j][k];

            if (i == j)
                L[i][j] = sqrt(A[i][i] - sum);
            else
                L[i][j] = (A[i][j] - sum) / L[j][j];
        }
    }

    // Step 2: Solve L * Y = B (forward substitution)
    for (int i = 0; i < N; i++) {
        float sum = 0;
        for (int k = 0; k < i; k++)
            sum += L[i][k] * Y[k];
        Y[i] = (B[i] - sum) / L[i][i];
    }

    // Step 3: Solve L^T * X = Y (backward substitution)
    for (int i = N - 1; i >= 0; i--) {
        float sum = 0;
        for (int k = i + 1; k < N; k++)
            sum += L[k][i] * X[k];
        X[i] = (Y[i] - sum) / L[i][i];
    }

    // Print result
    printf("Solution:\n");
    for (int i = 0; i < N; i++)
        printf("x%d = %f\n", i + 1, X[i]);

    return 0;
}
