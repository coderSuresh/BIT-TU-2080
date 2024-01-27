#include <stdio.h>

int main()
{
    float p, t, r, si;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    printf("Simple Interest: %.2f", si);

    return 0;
}