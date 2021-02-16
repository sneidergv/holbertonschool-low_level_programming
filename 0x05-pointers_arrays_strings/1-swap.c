#include "holberton.h"

/**
* swap_int - Write a function that swaps the values of two integers.
*
* @a: integer 1.
* @b: integer 2.
*
* Return: void.
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
