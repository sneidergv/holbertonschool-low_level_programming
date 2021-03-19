#include "lists.h"
#include <string.h>

/**
* add_node - Write a function that adds a new node at the
* beginning of a list_t list.
* @head: Double pointer to linked list.
* @str: String to duplicated.
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (new->str[len])
		len++;

	new->len = len;

	new->next = *head;
	*head = new;
	return (new);
}
