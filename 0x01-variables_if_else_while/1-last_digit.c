#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point for the program
 *
 * Returns - 0 on success
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    last_digit = n % 10;

    if (last_digit > 5)
        printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
    else if (last_digit < 5 && last_digit != 0)
        printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
    else
        printf("Last digit of %i is %i and is 0\n", n, last_digit);

    return (0);
}