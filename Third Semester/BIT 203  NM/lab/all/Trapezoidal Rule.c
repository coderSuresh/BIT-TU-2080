#include <stdio.h>

float f(float x) {
    return x * x;  // Example: f(x) = x^2
}

int main() {
    float a = 0, b = 4;  // limits
    int n = 4;           // number of intervals
    float h = (b - a) / n;
    float sum = f(a) + f(b);

    for(int i = 1; i < n; i++) {
        float x = a + i * h;
        sum += 2 * f(x);
    }

    float result = (h / 2) * sum;
    printf("Approximate integral = %.4f\n", result);
    return 0;
}
