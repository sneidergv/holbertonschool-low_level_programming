#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - Write a function that executes a function given as
* a parameter on each element of an array.
* @array: array to print.
* @size: size of the array.
* @action: pointer to the function you need to use.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
