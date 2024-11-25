#include <stdio.h>

int main()
{
    FILE *fptr;
    char filename[100], ch;
    int total_character = 0, total_lines = 0;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Error! File not found.");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        total_character++;

        if (ch == '\n' || ch == '\0')
            total_lines++;
    }

    printf("Total characters: %d\n", total_character);
    printf("Total lines: %d\n", total_lines);

    fclose(fptr);

    return 0;
}