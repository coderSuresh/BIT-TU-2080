#include <stdio.h>
#include <math.h>

#define EPS 0.0001

float f(float x) {
    return x*x*x - x - 2;
}

float df(float x) {
    return 3*x*x - 1;
}

int main() {
    float x0 = 1.5, x1;

    while(1) {
        x1 = x0 - f(x0)/df(x0);
        if(fabs(x1 - x0) < EPS)
            break;
        x0 = x1;
    }

    printf("The root is %.4f\n", x1);
    return 0;
}
