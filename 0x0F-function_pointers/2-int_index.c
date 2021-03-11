#include "function_pointers.h"

/**
* int_index - Write a function that searches for an integer.
* @array: Array to compare.
* @size: the number of elements in the array array.
* @cmp: pointer to functions.
* Return: returns the index of the first element for which
* the cmp function does not return 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == 00 || size <= 0 || cmp == 00)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
