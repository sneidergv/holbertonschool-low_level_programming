#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *index;

	while (*head != NULL && head != NULL)
	{
		index = *head;
		*head = index->next;
		free(index);
	}
}
