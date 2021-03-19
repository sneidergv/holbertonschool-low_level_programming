#include "lists.h"

/**
* print_list - Write a function that prints all the
* elements of a list_t list.
* @h: pointer to struct first node.
* Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *tmp = h;

	while (tmp)
	{
		if (tmp->str)
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
		}
		else
		{
			printf("[0] (nil)\n");
			tmp = tmp->next;
		}
		i++;
	}
	return (i);
}
