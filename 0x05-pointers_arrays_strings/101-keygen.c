#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: (0) on success
 */

int main(void)
{
	printf("%d\n", rand() % INT_MAX);
	return (0);
}
