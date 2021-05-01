#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list.
 * @head: linked list head.
 * @index: the index of the node, starting from 0.
 * Return: nth node or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
