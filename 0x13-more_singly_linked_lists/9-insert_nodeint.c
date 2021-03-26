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
	listint_t *temp, new_node;
	int counter = 1;

	temp = *head;
	while (temp)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);
	}

}