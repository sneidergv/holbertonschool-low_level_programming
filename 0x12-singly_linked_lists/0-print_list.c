#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	if (!h)
		return (0);
	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		i++;
	}
	return (i);
}
