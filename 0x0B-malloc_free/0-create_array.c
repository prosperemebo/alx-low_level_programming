#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *
 * @size: size of the array
 * @c: first character
 * Return: Pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
	free(p);
}
