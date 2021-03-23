#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
* @head: Pointer to linked list.
* Return: void.
*/

void free_listint2(listint_t **head)
{
	listint_t *index = *head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		index = index->next;
		free(index);
		*head = index;
	}
}
