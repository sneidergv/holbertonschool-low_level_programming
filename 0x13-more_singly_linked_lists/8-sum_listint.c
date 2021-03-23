#include "lists.h"

/**
* sum_listint - function that returns the sum of all the
* data (n) of a listint_t linked list.
* @head: Pointer to nodes.
* Return: sum.
*/

int sum_listint(listint_t *head)
{
	listint_t *i_list = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (i_list)
	{
		sum += i_list->n;
		i_list = i_list->next;
	}
	return (sum);
}
