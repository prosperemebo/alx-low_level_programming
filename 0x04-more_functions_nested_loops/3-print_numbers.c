#include <stdio.c>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Returns - (0) on sucess
 */

void print_numbers(void) {
	int i;

	for(i = 0; i < 10; i++) {
		_putchar(i);
		_putchar('\n');
	}

	return (0);
}
