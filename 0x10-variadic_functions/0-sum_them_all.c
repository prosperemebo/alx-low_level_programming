#include "variadic_functions.h"

/**
 * sum_them_all - Calculates sum of all inputs
 *
 * @n: First input
 * @...: Other inputs
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum = 0;

	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, int))
		sum += i;
	va_end(ap);

	return (sum);
}
