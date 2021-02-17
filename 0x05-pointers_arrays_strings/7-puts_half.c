#include "holberton.h"

/**
* puts_half - prints half of a string, followed by a new line.
*
* @str: array to print.
*
* Return: void.
*/

void puts_half(char *str)
{
	int i = 0, a;

	while (*(str + i))
	{
		i++;
	}

	a = i / 2;

	if (a % 2 == 0)
	{
		a = a + 1;
	}

	while (a < i)
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
