#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: String to scan.
* @accept: prefix.
* Return: number of bytes of s.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, k;

	int count = 0;


	for (i = 0; *(s + i); i++)
	{
		for (k = 0; *(accept + k); k++)
		{
			if (*(accept + k) == *(s + i))
			{
				count += 1;
				break;
			}
		}
		if (*(accept + k) == '\0')
			break;
	}
	return (count);
}
