#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	size_t i = 0;

	new_node = malloc(sizeof(listint_t));
	temp = *head;

	while (i < idx - 1)
	{
		if (temp)
			temp = temp->next;

		i++;
	}

	new_node->next = temp->next;
	new_node->n = n;
	temp->next = new_node;

	return (new_node);
}
