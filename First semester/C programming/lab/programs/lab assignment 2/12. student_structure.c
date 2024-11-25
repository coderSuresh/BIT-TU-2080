#include<stdio.h>

struct student
{
    int rollno;
    char f_name[20];
    char l_name[20];
    char address[50];
    char mobile_no[11];
};

void display(struct student s)
{
    printf("\nStudent details:\n");
    printf("Roll no: %d\n", s.rollno);
    printf("First name: %s\n", s.f_name);
    printf("Last name: %s\n", s.l_name);
    printf("Address: %s\n", s.address);
    printf("Mobile no: %s\n", s.mobile_no);
}

int main()
{
    struct student s1;
    printf("Enter roll no: ");
    scanf("%d", &s1.rollno);
    printf("Enter first name: ");
    scanf("%s", &s1.f_name);
    printf("Enter last name: ");
    scanf("%s", &s1.l_name);
    printf("Enter address: ");
    scanf("%s", &s1.address);
    printf("Enter mobile no: ");
    scanf("%s", &s1.mobile_no);
    display(s1);
    return 0;
}