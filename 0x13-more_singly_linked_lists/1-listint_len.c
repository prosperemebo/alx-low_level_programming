#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; h = h->next, count++)
		;

	return (count);
}
