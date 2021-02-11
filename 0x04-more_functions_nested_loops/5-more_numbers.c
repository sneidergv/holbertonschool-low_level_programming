#include "holberton.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*
* Return: void.
*/

void more_numbers(void)
{
	int numbers;
	int first_digit;
	int last_digit;
	int cycles;

	for (cycles = 0; cycles <= 10; cycles++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
			{
				first_digit = (numbers / 10);
				_putchar(first_digit + '0');
			}
			last_digit = (numbers % 10);
			_putchar(last_digit + '0');
		}
		_putchar('\n');
	}
}

