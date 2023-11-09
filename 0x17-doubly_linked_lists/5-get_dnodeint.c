#include "lists.h"

/**
 * get_dnodeint_at_index - To locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to be located.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - an address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
	if (head == NULL)
		return (NULL);
	head = head->next;
	index--;
	}

	return (head);
}
