#include "lists.h"

/**
* free_listint - Function that frees a listint_t list.
* @head: Pointer to nodes.
* Return: void.
*/

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
