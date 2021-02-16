#include "holberton.h"

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++);

	_putchar(i);
}
