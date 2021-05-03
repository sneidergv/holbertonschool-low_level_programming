#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: head of the linked list.
 * @index: index of the node that should be deleted.
 * Return: 1 or -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!tmp)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			if (!tmp->next)
			{
				tmp->prev->next = NULL;
				free(tmp);
				return (1);
			}
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}

