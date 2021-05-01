#include "lists.h"

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
