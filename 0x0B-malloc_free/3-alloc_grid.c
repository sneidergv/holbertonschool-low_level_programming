#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2
* dimensional array of integers.
* @width: Width of 2D Array.
* @height: Height of 2D Array.
* Return: 2D Array or NULL.
*/

int **alloc_grid(int width, int height)
{
	int a, b;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(int));
		if (array[a] == NULL)
		{
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
