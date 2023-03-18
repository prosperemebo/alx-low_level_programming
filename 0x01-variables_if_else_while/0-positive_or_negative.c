#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
* main - Application entry point
* @int n - Random number
	Prints if n is positive, negative or 0
* Return - 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
		printf("%i is positive\n", n);
	else if(n < 0)
		printf("%i is negative\n", n);
	else
		printf("%1 is zero\n", n);

	return (0);
}
