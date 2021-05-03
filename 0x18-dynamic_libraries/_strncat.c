#include "holberton.h"

/**
* _strncat - function that concatenates two strings.
*
* @dest: Destiny of concatenate string.
* @src: String source.
* @n: number of bytes.
*
* Return: Result of concatenate.
*/

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int a;

	/* Find the lenght of *dest */
	while (*(dest + length))
		length++;

	for (a = 0; *(src + a) && a < n; a++)
	{
		*(dest + length) = *(src + a);
		length++;
	}

	return (dest);
}
