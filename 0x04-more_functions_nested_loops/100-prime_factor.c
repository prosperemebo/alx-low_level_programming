#include "main.h"

/**
 * main - Program entry point
 *
 * Return: (0) on success
 */

int main(void)
{
	long int num = 612852475143;
	long int largest_prime_factor = 2;

	while (num > largest_prime_factor) {
		if (num % largest_prime_factor == 0)
			num /= largest_prime_factor;
		else
			largest_prime_factor++;
	}

	printf("%ld\n", largest_prime_factor);
	return (0);
}
