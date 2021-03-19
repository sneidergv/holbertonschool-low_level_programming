#include "lists.h"

/**
* list_len - Write a function that adds a new node at the
* beginning of a list_t list.
* @h: pointer to firs node.
* Return: number of elements in a linked list_t list.
*/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
