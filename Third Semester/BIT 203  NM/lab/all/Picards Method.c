#include <stdio.h>

float f(float x, float y) {
    return x + y;
}

float picard(float x, int iter) {
    float y = 1.0;
    float h = x / iter;
    float xi = 0;

    for (int i = 0; i < iter; i++) {
        y = 1 + xi + y * h;  
        xi += h;
    }

    return y;
}

int main() {
    int steps = 10;
    float x, h = 0.1;

    for (int i = 0; i <= steps; i++) {
        x = i * h;
        printf("x = %.2f, y = %.6f\n", x, picard(x, 5)); // 5 iterations
    }

    return 0;
}
