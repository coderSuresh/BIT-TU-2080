#include<stdio.h>

int main() {
    int n, flag;

    printf("Prime numbers between 1 and 100 are:\n");
    for (int i = 2; i <= 100; i++) {
        flag = 0;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d, ", i);
        }
    }

    return 0;
}