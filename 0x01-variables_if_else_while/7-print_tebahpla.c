#include <stdio.h>

/**
* main -entry point.
*
* Return: Always 0.
*/

int main(void)
{
	char f = 'z';

	while (f >= 'a')
	{
		putchar(f);
		f--;
	}
	putchar('\n');
	return (0);
}
