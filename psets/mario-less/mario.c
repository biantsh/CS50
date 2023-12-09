// https://cs50.harvard.edu/college/2023/fall/psets/1/mario/less/

#include "../../lib/c/cs50.c"
#include <stdio.h>

int main()
{
    int height = 0;

    while (height <= 0)
    {
        height = get_int("Height: ");
    }

    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if (row + col < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
