#include "lists.h"

/**
 * get_nodeint_at_index - to return the node at a certain index in a linked list
 * @head: the first node in a linked list
 * @index: An index of the node to return
 *
 * Return: A pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
