#include "holberton.h"

/**
* _strcpy - function that copies the string.
*
* @dest: array that recieve's the copy.
* @src: array to copy.
*
* Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
