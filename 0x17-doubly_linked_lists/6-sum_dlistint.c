#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: Pointer to linked list head.
 * Return: sum of the data.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (!head)
		return (sum);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
