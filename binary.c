/*
 *  Converts your decimal number to binary.
 */
#include <stdio.h>
#include <stdlib.h>

#define PRECISION 5

int main()
{
    double number = 0.1;
    int remainder;
    char *digits = malloc(sizeof(char) * PRECISION);
    for (int i = 0; i <= PRECISION; i++)
    {
        number *= 2;
        remainder = (int)number % 2;
        if (number >= 1)
        {
            digits[i] = '1';
            number -= 1;
        } else
        {
            digits[i] = '0';
        }
    }
    printf("\n0.%s", digits);
}