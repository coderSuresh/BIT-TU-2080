#include <stdio.h>
#include <math.h>

#define N 100
#define PI 3.14159265358979323846
#define H (PI/2.0 / N)

void euler(float s, float *y_end) {
    float y1 = 0, y2 = s; // y(0)=0, y'(0)=s
    float x = 0;
    for (int i = 0; i < N; i++) {
        float dy1 = y2;
        float dy2 = -y1;
        y1 += H * dy1;
        y2 += H * dy2;
        x += H;
    }
    *y_end = y1;
}

int main() {
    float target = 1.0; // y(π/2) = 1
    float s1 = 0.0, s2 = 2.0;
    float y_end1, y_end2, y_end_mid = 0.0;
    float s_mid = 0.0;
    int iter = 0, max_iter = 100;

    euler(s1, &y_end1);
    euler(s2, &y_end2);

    while (iter < max_iter) {
        s_mid = s1 + (target - y_end1) * (s2 - s1) / (y_end2 - y_end1);
        euler(s_mid, &y_end_mid);

        if (fabs(y_end_mid - target) < 0.0001)
            break;

        if ((y_end_mid - target) * (y_end1 - target) < 0) {
            s2 = s_mid;
            y_end2 = y_end_mid;
        } else {
            s1 = s_mid;
            y_end1 = y_end_mid;
        }

        iter++;
    }

    printf("Approximate initial slope y'(0) = %.6f\n\n", s_mid);

    // Final solution print using found slope
    float y1 = 0, y2 = s_mid, x = 0;
    printf("x\t\ty(x)\n");
    for (int i = 0; i <= N; i++) {
        printf("%.4f\t%.6f\n", x, y1);
        float dy1 = y2;
        float dy2 = -y1;
        y1 += H * dy1;
        y2 += H * dy2;
        x += H;
    }

    return 0;
}
