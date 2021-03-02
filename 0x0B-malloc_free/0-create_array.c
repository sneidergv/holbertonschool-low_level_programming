#include "holberton.h"
#include <stdlib.h>

/**
* create_array - function that creates an array of chars, and initializes
* it with a specific char.
* @size: Array size.
* @c: Character to fullfill array;
* Return: Null or pointer to a.
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (0);

	a = malloc(size * (sizeof(char)));

	if (a == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(a + i) = c;
	}
return (a);
}
