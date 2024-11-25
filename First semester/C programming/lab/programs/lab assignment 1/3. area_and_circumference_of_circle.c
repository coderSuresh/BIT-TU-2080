#include <stdio.h>

int main() {
    float r, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("Area of circle: %f\n", area);
    printf("Circumference of circle: %f\n", circumference);

    return 0;
}