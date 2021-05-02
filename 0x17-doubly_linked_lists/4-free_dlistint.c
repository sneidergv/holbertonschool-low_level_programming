#include "lists.h"

/**
 * free_dlistint - free linkedlist.
 * @head: pointer to head.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freezer;

	while (head)
	{
		freezer = head->next;
		free(head);
		head = freezer;
	}
}
