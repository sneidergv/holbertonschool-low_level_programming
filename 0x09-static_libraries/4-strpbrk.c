#include "holberton.h"

/**
* _strpbrk - function that searches a string for
* any of a set of bytes.
*
* @s: Main string.
* @accept: Second string.
* Return: pointer to the byte in s matches with accept
* or null.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (*(accept + j) != '\0')
			return (s + i);
	}
	return (0);
}
