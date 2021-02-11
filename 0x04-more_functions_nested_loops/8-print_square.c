#include "holberton.h"

/**
* print_square - prints a square, followed by a new line.
*
* @size: size is the size of the square.
*
* Return: void.
*/

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
