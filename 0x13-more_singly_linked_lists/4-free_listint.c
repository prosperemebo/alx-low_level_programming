#include "lists.h"

/**
 * free_listint - Frees a linked listint_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: void.
 */

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
