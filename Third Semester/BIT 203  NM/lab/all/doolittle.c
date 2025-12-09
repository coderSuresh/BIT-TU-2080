#include <stdio.h>

#define N 3

int main() {
    float A[N][N] = {
        {2, -1, -2},
        {-4, 6, 3},
        {-4, -2, 8}
    };
    float L[N][N] = {0};
    float U[N][N] = {0};
    int i, j, k;

    for (i = 0; i < N; i++) {
        // Upper Triangular
        for (k = i; k < N; k++) {
            float sum = 0;
            for (j = 0; j < i; j++)
                sum += L[i][j] * U[j][k];
            U[i][k] = A[i][k] - sum;
        }

        // Lower Triangular
        for (k = i; k < N; k++) {
            if (i == k)
                L[i][i] = 1;  // Diagonal as 1
            else {
                float sum = 0;
                for (j = 0; j < i; j++)
                    sum += L[k][j] * U[j][i];
                L[k][i] = (A[k][i] - sum) / U[i][i];
            }
        }
    }

    printf("L matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%.4f\t", L[i][j]);
        printf("\n");
    }

    printf("\nU matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%.4f\t", U[i][j]);
        printf("\n");
    }

    return 0;
}
