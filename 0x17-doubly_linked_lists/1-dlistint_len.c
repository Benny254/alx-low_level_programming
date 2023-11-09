#include "lists.h"

/**
 * dlistint_len - To count the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0; 
	for (const dlistint_t *temp = h; temp != NULL; temp = temp->next)
	{
	nodes++; 
	}

	return (nodes); 
}
