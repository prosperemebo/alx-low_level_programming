#include "lists.h"

/**
 * list_len - counts the number of nodes in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; h = h->next, i++)
		;

	return (i);
}
