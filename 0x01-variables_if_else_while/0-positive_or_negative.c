#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function generates a random integer and checks whether it is positive, negative, or zero.
 * If the integer is positive, it prints a message indicating that it is positive.
 * If the integer is negative, it prints a message indicating that it is negative.
 * If the integer is zero, it prints a message indicating that it is zero.
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
