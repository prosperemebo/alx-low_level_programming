#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 *
 * @separator: Input string for seperator
 * @n: Numbers of inputs
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *p = separator;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (separator && i != n - 1)
			printf("%s", p);
	}

	printf("\n");
}
