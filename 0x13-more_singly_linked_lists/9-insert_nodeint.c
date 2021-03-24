#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts
* a new node at a given position.
* @head: Pointer to linked list.
* @n: Node data.
* @idx: Index of the list where the new node should be added.
* Return: address of the new node or NULL.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *i_list = *head;
	unsigned int counter = 1;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
			new_node->n = n;
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i_list)
	{
		if (counter == idx)
		{
			new_node->next = i_list->next;
			i_list->next = new_node;
			return (new_node);
		}
		i_list = i_list->next;
		counter++;
	}
	free(new_node);
	return (NULL);
}
