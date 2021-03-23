#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
* @head: Pointer to linked list.
* Return: void.
*/

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
