#include "lists.h"

/**
* add_nodeint - Write a function that adds a new node
* at the beginning of a listint_t list.
* @head: Pointer to head structure.
* @n: Element to copie into new nodes.
* Return: the address of the new element or NULL.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
