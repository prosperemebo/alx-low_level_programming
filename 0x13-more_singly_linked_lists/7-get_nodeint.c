#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: Pointer to the first element of the list
 * @index: Index of the node to be returned
 *
 * Return: Pointer to the indexed node or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	while (i < index)
	{
		if (head)
			head = head->next;

		i++;
	}

	return (head);
}
