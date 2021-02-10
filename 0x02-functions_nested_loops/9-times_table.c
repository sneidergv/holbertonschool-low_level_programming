#include "holberton.h"

/**
* times_table - prints 9 times table.
*
* Return: void.
*/

void times_table(void)
{
	int i, j, k, m, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = (i * j);
			if (k > 9)
			{
				if (j < 9)
				{
					m = k / 10;
					n = k % 10;
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					m = k / 10;
					n = k % 10;
					_putchar(m + '0');
					_putchar(n + '0');
				}
			}
			else
			{
				if (j < 9)
				{
					_putchar(i * j + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(i * j + '0');
				}
			}
		}
	_putchar('\n');
	}
}
