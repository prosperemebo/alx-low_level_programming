#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Initialize a variable of type struct dog
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	for (i = 0; name[i] ; i++)
		;
	d->name = malloc(sizeof(char) * (i + 1));
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	for (i = 0; owner[i] ; i++)
		;
	d->owner = malloc(sizeof(char) * (i + 1));
	if (!d->owner)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (i = 0; name[i] ; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	for (i = 0; owner[i] ; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	return (d);
}
