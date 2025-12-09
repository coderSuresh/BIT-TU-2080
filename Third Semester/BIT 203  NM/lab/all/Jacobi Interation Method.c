#include <stdio.h>
#include <math.h>

#define N 3
#define MAX_ITER 100
#define TOL 0.000001

int main() {
    float A[N][N] = {
        {4, -1, 0},
        {-1, 4, -1},
        {0, -1, 3}
    };
    float b[N] = {15, 10, 10};
    float x[N] = {0, 0, 0};  // Initial guess
    float x_new[N];
    int iter;
    int i, j;
    float sum, error;

    for (iter = 0; iter < MAX_ITER; iter++) {
        for (i = 0; i < N; i++) {
            sum = 0;
            for (j = 0; j < N; j++) {
                if (j != i)
                    sum += A[i][j] * x[j];
            }
            x_new[i] = (b[i] - sum) / A[i][i];
        }

        error = 0;
        for (i = 0; i < N; i++) {
            error += fabs(x_new[i] - x[i]);
            x[i] = x_new[i];
        }

        if (error < TOL)
            break;
    }

    printf("Solution after %d iterations:\n", iter+1);
    for (i = 0; i < N; i++)
        printf("x[%d] = %.6f\n", i, x[i]);

    return 0;
}
