#include <stdio.h>
#include <math.h>

#define N 3
#define MAX_ITER 100
#define TOL 0.000001  // decimal tolerance

int main() {
    float A[N][N] = {
        {4, -1, 0},
        {-1, 4, -1},
        {0, -1, 3}
    };
    float b[N] = {15, 10, 10};
    float x[N] = {0, 0, 0};  // Initial guess
    int iter, i, j;
    float sum, error;

    for (iter = 0; iter < MAX_ITER; iter++) {
        error = 0;
        for (i = 0; i < N; i++) {
            sum = 0;
            for (j = 0; j < N; j++) {
                if (j != i)
                    sum += A[i][j] * x[j];
            }
            float x_old = x[i];
            x[i] = (b[i] - sum) / A[i][i];
            error += fabs(x[i] - x_old);
        }
        if (error < TOL)
            break;
    }

    printf("Solution after %d iterations:\n", iter+1);
    for (i = 0; i < N; i++)
        printf("x[%d] = %.6f\n", i, x[i]);

    return 0;
}
