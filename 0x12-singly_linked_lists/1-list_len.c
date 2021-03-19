#include "lists.h"

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
