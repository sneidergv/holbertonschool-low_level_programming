#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new
 * node at the end of a dlistint_t list.
 * @head: Linked list pointers.
 * @n: Node data.
 * Return: New node or NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
