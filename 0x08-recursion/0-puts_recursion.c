#include "holberton.h"



void _puts_recursion(char *s)
{
	int index = 0;

	while (*(s + index))
	{
		_putchar(*(s + index));
		index++;
	}
	_putchar('\n');
}
