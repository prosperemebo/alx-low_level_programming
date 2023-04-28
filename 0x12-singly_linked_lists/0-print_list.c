#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; h = h->next, i++)
	{

		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
	}

	return (i);
}
