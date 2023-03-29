#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: Source String
 * @dest: Destnation String
 * @n: Number of bytes
 *
 * Return: destination String
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	dest[i] = ' ';

	for (j = 0; src[j] != '\0' && j < n; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}

