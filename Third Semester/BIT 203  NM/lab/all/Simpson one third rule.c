#include <stdio.h>

float f(float x) {
    return x*x;  // Example: f(x) = x^2
}

int main() {
    float a = 0, b = 4;
    int n = 4;  // Must be even
    float h = (b - a)/n;
    float sum = f(a) + f(b);

    for(int i = 1; i < n; i++) {
        float x = a + i*h;
        if(i % 2 == 0)
            sum += 2*f(x);
        else
            sum += 4*f(x);
    }

    float result = (h/3)*sum;
    printf("Approximate integral = %.4f\n", result);
    return 0;
}
