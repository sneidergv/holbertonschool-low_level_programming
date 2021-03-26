#include "holberton.h"

/**
* binary_to_uint - Write a function that converts a
* binary number to an unsigned int.
* @b: String that contains binary number.
* Return: Decimal number from binary (b).
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, sum = 0, e = 0;
	int j;
	if (!b)
		return (0);
	while (b[len])
		len++;

	for(j = (len - 1); j >= 0; j--, e++)
	{
		if (b[j] == '1')
		{
			sum += _pow_recursion(2, e);
			continue;
		}
		if (b[j] != '0')
			return (0);
	}
	return (sum);
}

/**
* _pow_recursion - function that returns the value of x
* raised to the power of y.
* @x: base.
* @y: power to.
* Return: x raised to the power of y.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
