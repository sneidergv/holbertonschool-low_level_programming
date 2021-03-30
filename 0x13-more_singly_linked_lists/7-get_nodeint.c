#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth
* node of a listint_t linked list.
* @head: Pointer to nodes.
* @index: Index of the node.
* Return: node or NULL.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int counter = 0;

	p = head;

	while (p != NULL)
	{
		if (counter != index)
		{
			p = p->next;
			counter++;
		}
		else
			return (p);
	}
	return (NULL);
}
