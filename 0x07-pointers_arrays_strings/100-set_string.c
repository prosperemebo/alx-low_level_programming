#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: string 1
 * @to: destination
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
