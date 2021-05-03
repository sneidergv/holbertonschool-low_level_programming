#include "holberton.h"

/**
* _strchr - function that locates a character in a string.
* @s: string to check.
* @c: character.
* Return: pointer or Null.
*/

char *_strchr(char *s, char c)
{
	int index = 0;

	while (*(s + index))
	{
		if (*(s + index) == c)
		{
			return (s + index);
		}
		index++;
	}
	if (*(s + index) == c)
	{
		return (s + index);
	}
	else
	{
		return (0);
	}
}
