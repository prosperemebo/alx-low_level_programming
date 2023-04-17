#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct Dog - Real Dog Blueprint
 *
 * @name: Dog's Name
 * @age: Dog's Age
 * @owner: Dog's owner
 */

struct Dog
{
	char *name;
	int age;
	char *owner;
}

typedef struct Dog dog;

#endif
