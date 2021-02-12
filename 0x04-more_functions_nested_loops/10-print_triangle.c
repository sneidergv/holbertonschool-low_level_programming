#include "holberton.h"

/**
* print_triangle - prints a triangle, followed by a new line.
*
* @size: size of the triangle.
*
* Return: void.
*/

void print_triangle(int size)
{
	int a, b, z;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (z = (size - a); z > 0; z--)
			{
				_putchar('.');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
