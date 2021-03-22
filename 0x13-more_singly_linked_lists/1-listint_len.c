#include "lists.h"

/**
* listint_len - function that returns the number of elements
* in a linked listint_t list.
* @h: pointer to linked list.
* Return: Number of elements in a linked list.
*/

size_t listint_len(const listint_t *h)
{
	int n_nodes = 0;

	while (h)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
