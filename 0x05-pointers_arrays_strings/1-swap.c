#include "main.h"

/**
 * swap_int - swaps values of arguments
 * @a: first int pointer
 * @b: second int pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
