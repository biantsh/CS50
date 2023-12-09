// https://cs50.harvard.edu/college/2023/fall/psets/1/mario/more/

#include "../../lib/c/cs50.c"
#include <stdio.h>

int main(void)
{
    int height = 0;

    while (height < 1 || height > 8) {
        height = get_int("Height: ");
    }

    for (int i = 1; i < height + 1; i++)
    {
        // Print space before hashes
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Print hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print more hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Print space after hashes
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
}
