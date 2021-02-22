#include "holberton.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		*(dest + index) = *(src + index);
		index++;
	}
	return (dest);
}
