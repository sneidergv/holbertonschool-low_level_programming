#include "holberton.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: min range.
* @max: max range.
* Return: NULL or pointer
*/

int *array_range(int min, int max)
{
	int *nArray;
	int index, lenght;

	if (min > max)
		return (NULL);

	lenght = (max - min) + 1;

	nArray = malloc(lenght * (sizeof(int)));

	if (nArray == NULL)
		return (NULL);

	for (index = 0; index < lenght; index++)
	{
		nArray[index] = min;
		min++;
	}
	return (nArray);
}

