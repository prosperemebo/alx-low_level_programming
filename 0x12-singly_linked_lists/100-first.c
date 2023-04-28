#include <stdio.h>

/**
 * print_before_main - Prints a message before the main function is executed.
 *
 * Return: (0) on success
 */

int __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

	return (0);
}
