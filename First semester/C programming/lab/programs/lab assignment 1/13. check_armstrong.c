#include <stdio.h>

int main()
{
    int num, temp_num, input, result = 0, rem, num_of_digit = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    num = input;
    temp_num = input;

    while (temp_num != 0)
    {
        num_of_digit++;
        temp_num /= 10;
    }

    while (num != 0)
    {
        rem = num % 10;

        int power = 1;
        for (int i = 0; i < num_of_digit; i++)
        {
            power *= rem;
        }
        result += power;

        num /= 10;
    }

    if (input == result)
        printf("%d is an Armstrong number.", input);
    else
        printf("%d is not an Armstrong number.", input);

    return 0;
}