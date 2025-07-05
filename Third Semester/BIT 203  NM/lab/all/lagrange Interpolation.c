#include <stdio.h>

int main() {
    int n = 4;
    float x[] = {1, 2, 4, 5};
    float y[] = {1, 4, 16, 25};
    float xp = 3.5, yp = 0, term;
    
    for(int i = 0; i < n; i++) {
        term = y[i];
        for(int j = 0; j < n; j++) {
            if(i != j)
                term *= (xp - x[j]) / (x[i] - x[j]);
        }
        yp += term;
    }

    printf("Interpolated value at x = %.2f is %.4f\n", xp, yp);
    return 0;
}
