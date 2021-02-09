#include "holberton.h"

/**
* print_alphabet_x10 - check the code for Holberton School students.
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{

	char i;

	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
