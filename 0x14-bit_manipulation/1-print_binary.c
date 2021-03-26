#include "holberton.h"

/**
* print_binary - function that prints the
* binary representation of a number.
* @n: number to convert.
* Return: void.
*/

void print_binary(unsigned long int n)
{
	unsigned long int k;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (int i = 31; i >= 0; i--)
	{
		k = n >> i;

		if (k & 1)
			_putchar('1');
		else if (k != 0)
			_putchar('0');
	}
}
