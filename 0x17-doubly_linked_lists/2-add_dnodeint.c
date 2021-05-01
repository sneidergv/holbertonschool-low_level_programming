#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: Linked list head.
 * @n: node data.
 * Return: Pointer to new element or NULL.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
