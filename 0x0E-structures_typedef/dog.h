#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - A Real Dog's Blueprint
 *
 * @name: Dog's Name
 * @age: Dog's Age
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
