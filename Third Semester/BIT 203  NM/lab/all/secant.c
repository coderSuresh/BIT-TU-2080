#include <stdio.h>
#include <math.h>

#define EPS 0.0001

float f(float x) {
    return x*x*x - x - 2;
}

int main() {
    float x0 = 1, x1 = 2, x2;

    while(1) {
        x2 = x1 - f(x1)*(x1 - x0)/(f(x1) - f(x0));
        if(fabs(x2 - x1) < EPS)
            break;
        x0 = x1;
        x1 = x2;
    }

    printf("The root is %.4f\n", x2);
    return 0;
}
