#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog out of memory"
 *
 * @d: Input Dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
