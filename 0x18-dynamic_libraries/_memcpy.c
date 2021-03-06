#include "holberton.h"

/**
* _memcpy - function that copies memory area.
* @dest: string.
* @src: string.
* @n: number of bytes.
* Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
