#include<stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    printf("The sum of first 100 natural numbers is %d.", sum);

    return 0;
}