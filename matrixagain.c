#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int h = 6 + n / 2;

    // TREE PART
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h - i - 1; j++)
            printf(" ");

        for (int j = 0; j < 2 * i + 1; j++)
            printf("*");

        printf("\n");
    }

    // TRUNK PART
    int trunk_spaces = h - (n / 2) - 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < trunk_spaces; j++)
            printf(" ");

        for (int j = 0; j < n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}