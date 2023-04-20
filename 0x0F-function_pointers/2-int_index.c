#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: Input array
 * @size: Number of elements in input array
 * @cmp: Pointer to input function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
