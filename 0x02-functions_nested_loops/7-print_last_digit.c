#include "holberton.h"

/**
* print_last_digit - prints the last digit of a number.
*
* @n: variable to evaluate.
*
* Return: last digit of n.
*/

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = (n % 10) * -1;
		_putchar(a + '0');
	}
	else
	{
		a = n % 10;
		_putchar(a + '0');
	}
	return (a);
}
