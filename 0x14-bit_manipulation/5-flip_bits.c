#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m; // XOR the numbers to get the differing bits

	while (diff != 0)
	{
		count += (diff & 1); // Add 1 if the lowest bit is set
		diff >>= 1;	     // Shift the difference to the right by 1 bit
	}

	return count;
}
