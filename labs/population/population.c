// https://cs50.harvard.edu/college/2022/spring/labs/1/

#include "../../lib/c/cs50.c"
#include <stdio.h>

int main(void)
{
    int start_size = 0;
    int end_size = 0;
    int num_years = 0;

    while (start_size < 9)
    {
        start_size = get_int("Start size: ");
    }

    while (end_size < start_size)
    {
        end_size = get_int("End size: ");
    }

    int num_births;
    int num_deaths;

    while (start_size < end_size)
    {
        num_births = start_size / 3;
        num_deaths = start_size / 4;

        start_size += num_births - num_deaths;
        num_years += 1;
    }

    printf("Years: %d\n", num_years);
}
