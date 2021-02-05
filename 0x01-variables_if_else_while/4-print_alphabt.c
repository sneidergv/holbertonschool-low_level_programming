#include <stdio.h>

/**
* main - entry point.
*
* Return: Always 0.
*
*/

int main(void)
{
	char b;
	b = 'a';

	while (b <= 'z')
	{
		if ((b != 'e') && (b != 'q'))
		{
			putchar(b);
			b++;
		}
		else
		{
		b++;
		}
	}
	putchar('\n');
	return (0);
}
