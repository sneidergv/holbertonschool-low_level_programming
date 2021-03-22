#include "lists.h"

/**
* print_listint - Write a function that prints all the elements
* of a listint_t list.
* @h: pointer to linked list.
* Return: Number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	int n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
