#include <stdio.h>
#include <string.h>

void decimalToBinary(int n) {
    char binary[32];  // Array to hold binary representation
    int index = 0;

    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary and store remainders
    while (n > 0) {
        binary[index++] = (n % 2) + '0';  // Store '0' or '1' as char
        n = n / 2;
    }
    binary[index] = '\0';  // Null-terminate the string

    // Reverse the string to get the correct binary representation
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = binary[start];
        binary[start] = binary[end];
        binary[end] = temp;
        start++;
        end--;
    }

    printf("Binary: %s\n", binary);
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}
