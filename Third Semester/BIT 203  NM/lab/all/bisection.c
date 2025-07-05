#include <stdio.h>
#include <math.h>

#define EPS 0.0001

float f(float x) {
    return x*x*x - x - 2;
}

int main() {
    float a = 1, b = 2, c;

    if(f(a) * f(b) > 0) {
        printf("Invalid interval.\n");
        return 0;
    }

    while((b - a) >= EPS) {
        c = (a + b) / 2;

        if(f(c) == 0.0)
            break;
        else if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    printf("The root is %.4f\n", c);
    return 0;
}
