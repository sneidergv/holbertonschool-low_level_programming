#include "holberton.h"

/**
* main - entry point, print "holberton".
*
* description: print holberton with _putchar.
*
* Return: Always 0.
*
*/

int main(void)
{
char a;

char i;

char h[] = "holberton\n";

for (i = 0; i < 10; i++)
{
a = h[i];

_putchar(a);
}
return (0);
}
