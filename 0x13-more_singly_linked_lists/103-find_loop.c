#include "lists.h"

/**
 * find_listint_loop - Finds the node where the loop starts in a linked list.
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;
	if (!head)
		return (NULL);

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (hare);
		}
	}

	return (NULL);
}
