#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints input strings with seperator
 *
 * @separator: Imput string, printed inbetween strings
 * @n: Number of inputs
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *p = separator, *arg;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, char *);

		if (arg)
			printf("%s", arg);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", p);
	}
	printf("\n");
}
