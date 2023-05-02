#include "lists.h"

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
