// https://cs50.harvard.edu/college/2023/fall/psets/1/mario/more/

#include "../../lib/c/cs50.c"
#include <stdio.h>

int main(void)
{
    const int gap = 2;
    int height = 0;

    while (height < 1 || height > 8)
    {
        height = get_int("Height: ");
    }

    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < 2 * height + gap; col++)
        {
            if (((col < height) && (col + row >= height - 1))  // Left pyramid
            || ((col >= height + gap) && (col - row <= height + gap))) // Right pyramid
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
