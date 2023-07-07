#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 *
 * @key: Input key
 * @size: Input size
 *
 * Return: Resolved index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
