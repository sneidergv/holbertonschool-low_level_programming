#include "holberton.h"

/**
* _memset - function that fills memory with a constant byte.
*
* @s: array to fill the memory area.
* @b: Constant byte.
* @n: byte number.
*
* Return: pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		*(s + index) = b;
	}
	return (s);
}
