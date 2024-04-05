#include<stdio.h>

int main() {
    FILE *fptr;
    char file_name[100];

    printf("Enter the file name: ");
    scanf("%s", file_name);

    fptr = fopen(file_name, "r");

    if (fptr == NULL) {
        printf("Error! File not found.");
        return 1;
    }

    printf("Content from the file: \n");
    printf("----------------------------\n");
    
    char ch;
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr);

    return 0;
}
