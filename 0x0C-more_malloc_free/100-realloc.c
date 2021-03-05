#include "holberton.h"
#include <stdlib.h>

/**
* _realloc - function that reallocates a memory
* block using malloc and free.
* @ptr: Pointer to old Array.
* @old_size: Size in bytes, of the allocated space for ptr.
* @new_size: Size in bytes of the new memory block.
* Return: NULL if realloc fails or pointer to new memory allocated.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newArray, *oldArray = ptr;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newArray = malloc(new_size);
		return (newArray);
	}

	newArray = malloc(new_size);
	if (newArray == NULL)
		return (NULL);

	for (index = 0; index < old_size; index++)
		newArray[index] = oldArray[index];
	free(ptr);
	return (newArray);
}

