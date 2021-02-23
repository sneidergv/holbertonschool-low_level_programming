#include "holberton.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}
	return (dest);
}
