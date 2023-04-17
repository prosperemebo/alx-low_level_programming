#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints struct dog
 *
 * @d: Real Dog
 */

void print_dog(struct dog *d)
{
	if (!d->name)
		d->name = "Undefined!";
		
	if (!d->owner)
		d->owner = "Undefined!";

	printf("Name: %s\n", d->name);
	printf("Owner: %s\n", d->owner);
	printf("Age: %f\n", d->age);
}