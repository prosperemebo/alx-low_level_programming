#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point
 *
 * @argc: int
 * @argv: vector
 * Return: (0) On Success
 */

int main(int argc, char *argv[])
{
	int arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = strtol(argv[1], NULL, 10);
	arg2 = strtol(argv[2], NULL, 10);
	printf("%i\n", arg1 * arg2);
	return (0);
}
