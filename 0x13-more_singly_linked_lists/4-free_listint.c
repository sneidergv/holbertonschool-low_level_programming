#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *index;

	while (head)
	{
		index = head;
		head = index->next;
		free(index);
	}
}
