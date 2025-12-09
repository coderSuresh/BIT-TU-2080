#include <stdio.h>

float f(float x) {
    return x*x;  // Example: f(x) = x^2
}

int main() {
    float a = 0, b = 4;
    int n = 3;  // Must be multiple of 3
    float h = (b - a)/n;
    float sum = f(a) + f(b);

    for(int i = 1; i < n; i++) {
        float x = a + i*h;
        if(i % 3 == 0)
            sum += 2*f(x);
        else
            sum += 3*f(x);
    }

    float result = (3*h/8)*sum;
    printf("Approximate integral = %.4f\n", result);
    return 0;
}
