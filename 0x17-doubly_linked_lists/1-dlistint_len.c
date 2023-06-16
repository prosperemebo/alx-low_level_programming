#include "lists.h"

/**
 * dlistint_len - Counts the number of node in input list
 *
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return count;
}
