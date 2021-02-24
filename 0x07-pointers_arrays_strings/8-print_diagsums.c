#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of the two diagonals.
* @a: Matrix
* @size: Matrix Size.
* Return: void.
*/

void print_diagsums(int *a, int size)
{
	int index1, index2, d, left = 0, right = 0;

	for (index1 = 0; index1 < size; index1++)
	{
		d = (index1 * size) + index1;
		left +=  *(a + d);
	}
	for (index2 = 0; index2 < size; index2++)
	{ 
		d = (index2 * size) + (size - index2) - 1;
		right += *(a + d);
	}
	printf("%d, %d\n", left, right);
}
