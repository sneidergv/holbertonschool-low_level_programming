#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: number of elements.
* @size: bytes.
* Return: Pointer or NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
	{
		p[index] = 0;
	}

	return (p);
}
