#include<stdio.h>

int main() {
    float phy, chem, math, total;

    printf("Enter the marks of Physics, Chemistry and Mathematics: ");
    scanf("%f %f %f", &phy, &chem, &math);

    total = phy + chem + math;

    if (phy >= 55 && chem >= 50 && math >= 65 && total >= 180 && phy + math >= 130) {
        printf("The candidate is eligible for admission.");
    } else {
        printf("The candidate is not eligible for admission.");
    }

    return 0;
}