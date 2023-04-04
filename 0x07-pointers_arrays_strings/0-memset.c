#include <stdio.h>

/**
 * _memset - Fills memory with a byte.
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
