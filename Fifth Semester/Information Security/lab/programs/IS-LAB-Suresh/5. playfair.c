#include <stdio.h>
#include <string.h>

int main()
{
    // 5x5 Matrix with key "NEPAL"
    char matrix[5][5] = {
        {'N', 'E', 'P', 'A', 'L'},
        {'B', 'C', 'D', 'F', 'G'},
        {'H', 'I', 'K', 'M', 'O'},
        {'Q', 'R', 'S', 'T', 'U'},
        {'V', 'W', 'X', 'Y', 'Z'}};

    char msg[] = "THISISKATHMANDU"; // 15 letters
    int len = strlen(msg);
    int r1, c1, r2, c2;

    printf("Key: NEPAL | Message: %s\n", msg);
    printf("Ciphertext: ");

    for (int i = 0; i < len; i += 2)
    {
        char a = msg[i];
        char b = (i + 1 < len) ? msg[i + 1] : 'X'; // Add 'X' for odd length

        // Find positions in matrix
        for (int r = 0; r < 5; r++)
        {
            for (int c = 0; c < 5; c++)
            {
                if (matrix[r][c] == a)
                {
                    r1 = r;
                    c1 = c;
                }
                if (matrix[r][c] == b)
                {
                    r2 = r;
                    c2 = c;
                }
            }
        }

        if (r1 == r2)
            printf("%c%c", matrix[r1][(c1 + 1) % 5], matrix[r2][(c2 + 1) % 5]);
        else if (c1 == c2)
            printf("%c%c", matrix[(r1 + 1) % 5][c1], matrix[(r2 + 1) % 5][c2]);
        else
            printf("%c%c", matrix[r1][c2], matrix[r2][c1]);
    }
    printf("\n");
    return 0;
}