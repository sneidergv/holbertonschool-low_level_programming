#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *i_list;
	unsigned int counter = 0;

	i_list = head;

	while (i_list != NULL)
	{
		if (counter != index)
		{
			i_list = i_list->next;
			counter++;
		}
		else
			return (i_list);
	}
	return (NULL);
}
