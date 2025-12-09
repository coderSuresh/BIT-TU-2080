#include <stdio.h>
#include <math.h>

#define N 10
#define PI 3.14159265358979323846

int main() {
    float a = 0, b = PI/2;
    float h = (b - a) / N;
    float y[N+1], alpha = 0, beta = 1;  // Boundary conditions y(a)=alpha, y(b)=beta
    float A[N-1][N-1], B[N-1];
    int i, j;

    // Setup matrix A and vector B for finite difference
    for (i = 0; i < N-1; i++) {
        for (j = 0; j < N-1; j++) {
            A[i][j] = 0;
        }
        B[i] = 0;
    }

    for (i = 0; i < N-1; i++) {
        A[i][i] = 2 + h*h;
        if (i > 0)
            A[i][i-1] = -1;
        if (i < N-2)
            A[i][i+1] = -1;
    }

    B[0] = alpha;
    B[N-2] = beta;

    // Adjust B vector
    B[0] += alpha;
    B[N-2] += beta;

    // Solve system A*y = B using simple Gauss elimination
    // (for brevity, simple elimination without pivoting)

    // Forward elimination
    for (i = 0; i < N-2; i++) {
        float m = A[i+1][i]/A[i][i];
        for (j = i; j < N-1; j++) {
            A[i+1][j] -= m * A[i][j];
        }
        B[i+1] -= m * B[i];
    }

    // Back substitution
    float y_internal[N-1];
    y_internal[N-2] = B[N-2] / A[N-2][N-2];
    for (i = N-3; i >= 0; i--) {
        float sum = 0;
        for (j = i+1; j < N-1; j++) {
            sum += A[i][j] * y_internal[j];
        }
        y_internal[i] = (B[i] - sum) / A[i][i];
    }

    // Add boundary values
    y[0] = alpha;
    for (i = 1; i < N; i++) {
        y[i] = y_internal[i-1];
    }
    y[N] = beta;

    // Print results
    for (i = 0; i <= N; i++) {
        printf("x=%.4f, y=%.6f\n", a + i*h, y[i]);
    }

    return 0;
}

