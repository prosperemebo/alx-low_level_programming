#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to input hash table.
 * 
 * @ht: Input Hash Table.
 * @key: Input Key
 * @value: Input Value of key
 * 
 * Return: 1 on Success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	char *value_cp = NULL;
	hash_node_t *new_node = NULL;
	hash_node_t *head = NULL;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	value_cp = strdup(value);
	if (!value_cp)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] && !strcmp(ht->array[index]->key, key))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_cp;
		return (1);
	}
	for (head = ht->array[index]; head; head = head->next)
	{
		if (!strcmp(head->key, key))
		{
			free(head->value);
			head->value = value_cp;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
		return (0);
	new_node->value = value_cp;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
