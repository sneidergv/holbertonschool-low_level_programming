#include "holberton.h"

/**
* rev_string - Write a function that reverses a string.
*
* @s: string to reverse.
*
* Return: void.
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	char tmp[12];

	while (*(s + i))
	{
		*(tmp + i) = *(s + i); //tmp[Holberton]
		i++;
	}

	i -= 1; //'\0' i = 9

	while (i >= 0)
	{
		*(s + i) = *(tmp + j); // i = 9

		j++;
		i--;
	}
}
