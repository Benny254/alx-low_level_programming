#include "lists.h"

/**
 * sum_dlistint - To Sum all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
	{
	sum += head->n;
	}

	return (sum);
}
