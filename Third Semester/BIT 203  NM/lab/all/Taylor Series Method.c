#include <stdio.h>

int main() {
    float x0 = 0, y0 = 1;    // initial values
    float h = 0.1;           // step size
    int n = 10;              // number of steps
    float x = x0, y = y0;

    for (int i = 0; i < n; i++) {
        // Derivatives
        float f = x + y;                // dy/dx = f(x,y)
        float f1 = 1 + f;               // d²y/dx² = df/dx + df/dy * dy/dx = 1 + f

        // Taylor series expansion up to 2nd order
        y = y + h*f + (h*h/2)*f1;
        x = x + h;

        printf("x=%.2f, y=%.6f\n", x, y);
    }

    return 0;
}
