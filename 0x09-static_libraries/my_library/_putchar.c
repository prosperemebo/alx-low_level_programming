#include <unistd.h>

/**
 * _putchar - Function
 * @c: Input Character
 *
 * Return: (0)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
