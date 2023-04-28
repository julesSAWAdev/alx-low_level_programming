#include "lists.h"

/**
 * list_len - find the number of elements in
 *            list_t list.
 * @h: linked list_t list.
 * return: number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

