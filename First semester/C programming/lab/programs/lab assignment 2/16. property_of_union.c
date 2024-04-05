#include <stdio.h>

union Student
{
    int roll_number;
    char fname[20];
    char lname[20];
    char address[50];
    char mobile[11];
};

int main()
{
    union Student std;

    printf("Enter the details of 10 students:\n");

    printf("\nEnter the roll_number of student: ");
    scanf("%d", &std.roll_number);

    printf("Roll number before entering name %d\n", std.roll_number);

    printf("Enter the first name of student:");
    scanf("%s", std.fname);

    printf("First name before entering last name %s\n", std.fname);

    printf("Enter the last name of student:");
    scanf("%s", std.lname);

    printf("Last name before entering address %s\n", std.lname);

    printf("Enter the address of student:");
    scanf("%s", std.address);

    printf("Address before entering mobile number %s\n", std.address);

    printf("Enter the mobile number of student:");
    scanf("%s", std.mobile);

    printf("\nDetails of 2 students:\n");

    printf("\nroll_number %d\n", std.roll_number);
    printf("First name %s\n", std.fname);
    printf("Last name %s\n", std.lname);
    printf("Address %s\n", std.address);
    printf("Mobile %s\n", std.mobile);

    return 0;
}