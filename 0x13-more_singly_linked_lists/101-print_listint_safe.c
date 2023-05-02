#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * of integers safely
 *
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 *         If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = NULL, *check = NULL;

	if (!head)
		exit(98);

	temp = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		check = temp;
		temp = temp->next;

		if (check <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
	}

	return (count);
}
