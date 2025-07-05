#include <stdio.h>

#define N 3

int main() {
    float A[N][N+1] = {
        {2, -1, 1, 8},
        {3, 3, 9, 0},
        {3, 3, 5, -6}
    };
    int i, j, k;

    for (i = 0; i < N; i++) {
        // Make the diagonal element 1
        float diag = A[i][i];
        for (j = 0; j <= N; j++)
            A[i][j] /= diag;

        // Make other elements in current column 0
        for (k = 0; k < N; k++) {
            if (k != i) {
                float factor = A[k][i];
                for (j = 0; j <= N; j++)
                    A[k][j] -= factor * A[i][j];
            }
        }
    }

    printf("Solution:\n");
    for (i = 0; i < N; i++)
        printf("x[%d] = %.4f\n", i, A[i][N]);

    return 0;
}
