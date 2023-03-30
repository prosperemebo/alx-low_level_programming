#include "main.h"

/**
 * rot13 - Encodes input string into rot13.
 * @s: Input string
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;
	char og[] = "azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN",
	     rot[] = "nmreglhvbcdfqstuwxyzjkpioaNMREGLHVBCDFQSTUWXYZJKPIOA";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; og[j] != '\0'; j++)
		{
			if (s[i] == og[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}
