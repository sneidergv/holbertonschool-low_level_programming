#include "holberton.h"

/**
* _strncpy - Write a function that copies a string.
* @dest: destiny of string.
* @src: source of the string.
* @n: number of characters to copy.
* Return: Pointer to dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && *(src + index); index++)
	{
		*(dest + index) = *(src + index);
	}
	while (index < n)
	{
		*(dest + index) = '\0';
		index++;
	}
	return (dest);
}
