#include "holberton.h"

/**
* print_numbers - prints the numbers, from 0 to 9.
*
* Return: void.
*/

void print_numbers(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		_putchar(numbers);
	}
}
