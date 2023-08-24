#include <stdlib.h>
#include "lists.h"

/**
 * list_len - To return the number of elements in a linked list
 * @h: The pointer a list_t list
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		v++;
		h = h->next;
	}
	return (v);
}
