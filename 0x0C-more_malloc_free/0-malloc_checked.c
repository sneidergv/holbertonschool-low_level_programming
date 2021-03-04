#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc.
* @b: Integer that contains the value to allocated in memory.
* Return: A pointer to the allocated memory or
* 98 if the mallo_checked function fails.
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
