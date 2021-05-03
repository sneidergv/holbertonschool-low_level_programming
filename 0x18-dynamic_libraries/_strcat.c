#include "holberton.h"

/**
* _strcat - function that concatenates two strings.
*
* @dest: string concatenated.
* @src: string to copy.
*
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(dest + a))
		a++;

	while (*(src + b))
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	return (dest);
}
