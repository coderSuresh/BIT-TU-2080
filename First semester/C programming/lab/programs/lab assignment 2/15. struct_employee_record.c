#include<stdio.h>

struct Employee {
    int essn;
    char fname[20];
    char lname[20];
    char address[50];
    char mobile[11];
};

int main() {
    struct Employee emp[10];

    printf("Enter the details of 10 employees:\n");

    for (int i = 0; i < 10; i++) {
        printf("\nEnter the essn of employee %d: ", i + 1);
        scanf("%d", &emp[i].essn);

        printf("Enter the first name of employee %d: ", i + 1);
        scanf("%s", emp[i].fname);

        printf("Enter the last name of employee %d: ", i + 1);
        scanf("%s", emp[i].lname);

        printf("Enter the address of employee %d: ", i + 1);
        scanf("%s", emp[i].address);

        printf("Enter the mobile number of employee %d: ", i + 1);
        scanf("%s", emp[i].mobile);
    }

    printf("\nDetails of 10 employees:\n");

    printf("\nESSN\tFirst name\tLast name\tAddress\tMobile\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\t%s\t%s\t%s\t%s\n", emp[i].essn, emp[i].fname, emp[i].lname, emp[i].address, emp[i].mobile);
    }
}