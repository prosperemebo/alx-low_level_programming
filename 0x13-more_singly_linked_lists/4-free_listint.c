#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;

		free(temp);
	}
}
