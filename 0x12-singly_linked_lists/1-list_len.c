#include <stdio.h>
#include "lists.h"

/**
 * list_len - takes one arg
 * @h: list pointer with structur 
 * return: length of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
