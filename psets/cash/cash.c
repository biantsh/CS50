// https://cs50.harvard.edu/college/2023/fall/psets/1/cash/

#include "../../lib/c/cs50.c"
#include <stdio.h>

int main(void)
{
    int change = -1;

    while (change < 0)
    {
        change = get_int("Change owed: ");
    }

    int quarters = change / 25;
    change -= quarters * 25;

    int dimes = change / 10;
    change -= dimes * 10;

    int nickels = change / 5;
    change -= nickels * 5;

    int coins = quarters + dimes + nickels + change;
    printf("%d\n", coins);
}
