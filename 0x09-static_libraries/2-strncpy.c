#include "holberton.h"

/**
* _strncpy - _strncpy.
* @dest: argument1.
* @n: var.
* @src: char.
* Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && *(src + index); index++)
	{
		*(dest + index) = *(src + index);
	}
	return (dest);
}
