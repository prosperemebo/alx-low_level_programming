#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: pointer to pointer to the head node of a listint_t linked list.
 *
 * Return: the head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head)
		return (0);

	if (!*head)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;

	free(temp);

	return (n);
}
