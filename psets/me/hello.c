// https://cs50.harvard.edu/college/2023/fall/psets/1/me/

#include "../../lib/c/cs50.c"
#include <stdio.h>

int main(void)
{
    string user_name = get_string(NULL, "What's your name? ");
    printf("hello, %s\n", user_name);
}
