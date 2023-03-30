#include "main.h"

/**
 * reverse_array - Reverses the elements of an array of integers.
 * @a: Input array to be reversed
 * @n: Number of elements in input array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
