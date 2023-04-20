#include "function_pointers.h"

/**
 * print_name - Prints input name
 *
 * @name: Input Named
 * @f: Callback
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
