#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @src: Source String
 * @dest: Destnation String
 * @n: Number of bytes
 *
 * Return: destination String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return(dest);
}
