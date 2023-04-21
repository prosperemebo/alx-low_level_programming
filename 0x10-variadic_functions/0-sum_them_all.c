#include "variadic_functions.h"

/**
 * sum_them_all - Calculates sum of all inputs
 *
 * @n: First input
 * @...: Other inputs
 * Return: Sum of all inputs
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    int sum = 0;

    if (n == 0)
        return (0);

    va_start(ap, n);
    for (i = 0; i < n; i++)
        sum = sum + va_arg(ap, int);
    va_end(ap);

    return (sum);
}
