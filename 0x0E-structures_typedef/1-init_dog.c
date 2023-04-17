#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 *
 * @d: Dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}
