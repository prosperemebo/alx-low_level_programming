#include "main.h"

/**
 * factorial - Returns the factorial of input number
 *
 * @n: int
 * Return: factorial of input
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
