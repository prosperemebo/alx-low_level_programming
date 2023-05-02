#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be added in the new node
 * Return: pointer to the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = 0;

	if (!*head && idx > 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (i < idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;

		i++;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
