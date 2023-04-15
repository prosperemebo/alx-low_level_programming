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

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
