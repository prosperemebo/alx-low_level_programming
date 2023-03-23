#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks if value is digit
 * @c: number
 *
 * Return: result of addition
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
