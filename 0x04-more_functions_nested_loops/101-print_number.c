#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 *
 * @n: the integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int new_n = n;

	if (n < 0)
	{
		_putchar('-');
		new_n = -new_n;
	}
	if ((new_n / 10) > 0)
		print_number(new_n / 10);
	_putchar((new_n % 10) + '0');
}
