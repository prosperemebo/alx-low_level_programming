#include "hash_tables.h"

/**
 * hash_table_print - Prints input hash table.
 *
 * @ht: Input hash table
 *
 * Return: void on success
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, flag;
	hash_node_t *head;

	if (!ht)
		return;
	printf("{");
	for (i = 0, flag = 0; i < (int)ht->size; i++)
	{
		if (flag && ht->array[i])
			printf(", ");
		for (head = ht->array[i]; head; head = head->next)
		{
			printf("'%s': '%s'", head->key, head->value);
			if (head->next)
				printf(", ");
			flag = 1;
		}
	}
	printf("}\n");
}
