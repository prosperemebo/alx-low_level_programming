#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - Real Dog Blueprint
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

typedef struct dog dog;

#endif
