#include "main.h"

/**
 * _puts - Function
 * @s: Input String
 *
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
