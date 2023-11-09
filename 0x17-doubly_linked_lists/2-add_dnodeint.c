/*
 * File: 2-add_dnodeint.c
 * Auth: Benard 
 */

#include "lists.h"

/**
 * add_dnodeint - To add a new node at the beginning of a dlistint_t list.
 * @head: The pointer to the head of the dlistint_t list.
 * @n: an integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - an address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct node *newNode = malloc(sizeof(struct node));
	newNode->data = val;
	newNode->next = head;

	head = newNode;
}
