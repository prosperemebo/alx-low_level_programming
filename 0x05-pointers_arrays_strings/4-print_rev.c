#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: char
 *
 * Return: void
 **/

void print_rev(char *s)
{
	int i = strlen(s);

	for (i = 0; str[i] != '\0'; i++);

	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
