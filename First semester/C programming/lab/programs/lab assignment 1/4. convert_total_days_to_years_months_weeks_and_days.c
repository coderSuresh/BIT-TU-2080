#include <stdio.h>

int main()
{

    int total_days, years, months, weeks;

    printf("Enter total days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    total_days %= 365;
    months = total_days / 30;
    total_days %= 30;
    weeks = total_days / 7;
    total_days %= 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", total_days);

    return 0;
}