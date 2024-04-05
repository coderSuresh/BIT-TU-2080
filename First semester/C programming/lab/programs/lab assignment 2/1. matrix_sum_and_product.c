#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3], product[3][3];

    printf("Enter the elements of first 3x3 matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);
    }

    printf("Enter the elements of second 3x3 matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);
    }

    // Sum of two matrices
    printf("Sum of two matrices: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Product of two matrices
    printf("Product of two matrices: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}