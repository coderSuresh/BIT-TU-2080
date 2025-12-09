#include <stdio.h>

float f(float x, float y) {
    return x + y;
}

int main() {
    float x0 = 0, y0 = 1;
    float h = 0.1;
    int n = 10;
    float x = x0, y = y0;

    for (int i = 0; i < n; i++) {
        float k1 = f(x, y);
        float k2 = f(x + h/2, y + h*k1/2);
        float k3 = f(x + h/2, y + h*k2/2);
        float k4 = f(x + h, y + h*k3);

        y = y + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
        x = x + h;

        printf("x=%.2f, y=%.6f\n", x, y);
    }

    return 0;
}
