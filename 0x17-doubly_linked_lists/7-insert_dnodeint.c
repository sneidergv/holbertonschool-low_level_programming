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
	dlistint_t *tmp = *h, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = tmp;
		*h = new_node;
		new_node->prev = NULL;
		if (tmp)
			tmp->prev = new_node;
		return (new_node);
	}
	while (tmp)
	{
		if (i + 1 == idx)
		{
			if (tmp->next)
			{
				tmp->next->prev = new_node;
				new_node->next = tmp->next;
			}
			else
				new_node->next = NULL;
			tmp->next = new_node;
			new_node->prev = tmp;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
