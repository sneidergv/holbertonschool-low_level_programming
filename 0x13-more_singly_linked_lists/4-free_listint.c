#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head;
		head = i->next;
		free(i);
	}
}
