#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 *
 * @array: Input array
 * @size: Size of input array
 * @action: Pointer to input function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);

	}
}
