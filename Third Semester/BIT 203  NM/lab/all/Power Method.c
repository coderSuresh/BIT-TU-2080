#include <stdio.h>
#include <math.h>

#define N 3
#define MAX_ITER 100
#define TOL 0.000001

int main() {
    float A[N][N] = {
        {2, 1, 0},
        {1, 3, 1},
        {0, 1, 2}
    };
    float x[N] = {1, 1, 1};  // initial guess eigenvector
    float x_new[N];
    int i, j, iter;
    float lambda = 0, lambda_old = 0, norm, error;

    for (iter = 0; iter < MAX_ITER; iter++) {
        // Multiply A*x
        for (i = 0; i < N; i++) {
            x_new[i] = 0;
            for (j = 0; j < N; j++) {
                x_new[i] += A[i][j] * x[j];
            }
        }

        // Find norm (max absolute element)
        norm = fabs(x_new[0]);
        for (i = 1; i < N; i++)
            if (fabs(x_new[i]) > norm)
                norm = fabs(x_new[i]);

        // Normalize x_new
        for (i = 0; i < N; i++)
            x_new[i] /= norm;

        // Rayleigh quotient for eigenvalue approx
        lambda = 0;
        for (i = 0; i < N; i++) {
            float Ax = 0;
            for (j = 0; j < N; j++)
                Ax += A[i][j] * x_new[j];
            lambda += x_new[i] * Ax;
        }

        error = fabs(lambda - lambda_old);
        if (error < TOL)
            break;

        lambda_old = lambda;
        for (i = 0; i < N; i++)
            x[i] = x_new[i];
    }

    printf("Dominant Eigenvalue: %.6f\n", lambda);
    printf("Eigenvector:\n");
    for (i = 0; i < N; i++)
        printf("%.6f\n", x_new[i]);

    return 0;
}
