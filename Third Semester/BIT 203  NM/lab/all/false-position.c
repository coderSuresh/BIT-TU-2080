#include <stdio.h>
#include <math.h>
#define f(x) cos(x) - x*exp(x)

int main() {
    float a, b, c, fa, fb, fc, e;
    int step=1,N;
    printf("Enter a, b, error: ");
    scanf("%f%f%f", &a, &b, &e);
    
    fa = f(a), fb = f(b);
    if (fa * fb > 0) {
        printf("No root here.\n");
        return 1;
    }
    
    printf("\na\t\tb\t\tc\t\tf(a)\t\tf(b)\t\tf(c)\n");
    do {
        c = (a*fb - b*fa)/(fb - fa);
        fc = f(c);
        printf("%f\t%.6f\t%.6f\t% 6f\t%.6f\t% .6f\n", a, b, c, f(a),fb,fc);
        
        if (fa * fc < 0) 
            b = c, fb = fc;
        else 
            a = c, fa = fc;
    } while (fabs(fc) > e);
    
    printf("\nRoot: %.6f\n", c);
    return 0;
}
