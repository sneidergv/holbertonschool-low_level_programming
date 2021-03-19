#include "lists.h"

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
