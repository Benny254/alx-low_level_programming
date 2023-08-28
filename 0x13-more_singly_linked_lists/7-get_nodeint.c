#include "lists.h"

/**
 * get_nodeint_at_index - to return the node at a certain index in a linked list
 * @head: to first node in the linked list
 * @index: The index of a node to return
 *
 * Return: A pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
