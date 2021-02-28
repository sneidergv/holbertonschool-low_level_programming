#include "holberton.h"

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && *(src + index); index++)
	{
		*(dest + index) = *(src + index);
	}
	return (dest);
}
