#include "main.h"

/**
 * _strlen_recursion - Returns the length of input string
 *
 * @s: input string
 * Return: length of input string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
