// https://cs50.harvard.edu/college/2023/fall/psets/1/credit/

#include "../../lib/c/cs50.c"
#include <stdio.h>
#include <string.h>

int digit_sum(int value)
{
    char value_string[20];
    sprintf(value_string, "%d", value);

    int num_digits = strlen(value_string);
    int sum = 0;

    for (int i = 0; i < num_digits; i++)
    {
        sum += value_string[i] - '0';
    }

    return sum;
}

bool is_valid_card(long number)
{
    char number_string[20];
    sprintf(number_string, "%ld", number);

    int num_digits = strlen(number_string);
    int checksum = 0;

    for (int i = 0; i < num_digits; i++)
    {
        int char_index = num_digits - i - 1;
        int char_value = number_string[char_index] - '0';

        if (i % 2 == 0)
        {
            checksum += char_value;
        }
        else
        {
            checksum += digit_sum(char_value * 2);
        }
    }

    return checksum % 2 == 0;
}

string get_card_type(long number)
{
    char number_string[20];
    sprintf(number_string, "%ld", number);

    int num_digits = strlen(number_string);
    char first_digit = number_string[0];
    char second_digit = number_string[1];

    if (num_digits == 15 && first_digit == '3' && (second_digit == '4' || second_digit == '7'))
    {
        return "AMEX";
    }
    if (num_digits == 16 && first_digit == '5' && second_digit >= '1' && second_digit <= '5')
    {
        return "MASTERCARD";
    }
    if ((num_digits == 13 || num_digits == 16) && first_digit == '4')
    {
        return "VISA";
    }

    return "INVALID";
}

int main(void)
{
    long number = get_long("Number: ");

    if (is_valid_card(number))
    {
        printf("%s\n", get_card_type(number));
    }
    else
    {
        printf("INVALID\n");
    }
}
