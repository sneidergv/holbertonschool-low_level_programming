#include "holberton.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
*
* @n: numbers of backslahs.
*
* Return: void.
*/

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		/* cycle for print backslahs */
		for (a = 1; a <= n; a++)
		{
			if (a > 1)
			{
				/* Cycle for print whitespaces */
				for (b = 1; b < a; b++)
				{
					_putchar(' ');
				}
			}
			else if (a < 1)
			{
				_putchar('\n');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
