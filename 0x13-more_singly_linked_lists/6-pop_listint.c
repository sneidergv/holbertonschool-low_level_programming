#include "lists.h"

/**
* pop_listint - function that deletes the head
* node of a listint_t linked list.
* @head: pointer to a linked list.
* Return: The head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *index;
	unsigned int n;

	if (*head != NULL)
	{
		index = *head;
		*head = index->next;
		n = index->n;
		free(index);
		return (n);
	}
	return (0);
}