#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: Array of pointers to linked list.
 * @idx: index of the node to will added.
 * @n: Node data.
 * Return: Address of the new node or NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i = 0;

	if (!*h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (idx == 0)
	{
		new_node = *h;
		*h = new_node;
		return (new_node);
	}

	new_node->n = n;
	tmp = *h;

	while (tmp)
	{
		if (i == idx - 1)
		{
			new_node->prev = tmp;
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
