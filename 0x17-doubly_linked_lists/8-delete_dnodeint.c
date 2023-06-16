#include "lists.h"

/**
 * free_list - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees all
 * the nodes in a doubly linked list.
 */
void free_list(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * delete_dnodeint_at_index - Deletes a node at
 * a given index in a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, or -1 if the index is out of range.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = dlistint_len(*head);
	int i;
	dlistint_t *temp;

	if (!(*head) || len < index)
		return (-1);

	temp = *head;

	if (len == 0 && index == 0)
	{
		*head = NULL;
	}
	else if (!index)
	{
		(*head)->next->prev = NULL;
		(*head) = (*head)->next;
	}
	else if (index == len)
	{
		for (temp = *head; temp->next; temp = temp->next)
			;
		temp->prev->next = NULL;
	}
	else
	{
		for (temp = *head, i = 0; i < (int)index; i++, temp = temp->next)
			;
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}

/**
 * dlistint_len - Returns the number of
 * elements in a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; h = h->next, i++)
		;
	return (i - 1);
}
