#include "holberton.h"

/**
* reverse_array - function that reverses the content of an
* array of integers.
* @a: Pointer to array of integers.
* @n: number of elements of the array.
* Return: void.
*/

void reverse_array(int *a, int n)
{
	int i = 0, tmp, lenght = n - 1;

	while (i < lenght)
	{
		tmp = a[i];
		a[i] = a[lenght];
		a[lenght] = tmp;
		i++;
		lenght--;
	}
}
