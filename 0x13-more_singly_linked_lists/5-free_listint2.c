#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
* @head: Pointer to linked list.
* Return: void.
*/

void free_listint2(listint_t **head)
{
	listint_t *index;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		index = (*head)->next;
		free(*head);
		*head = index;
	}
}
