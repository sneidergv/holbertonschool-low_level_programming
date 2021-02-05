#include <stdio.h>

/**
* main - entry point.
*
* Return: Always 0.
*/

int main(void)
{
	char b = 48;

	char c = 58;

	char d  = 'a';

	while (b < c)
	{
		putchar(b);
		b++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
