#include "holberton.h"

/**
* _strcmp - function that compares two strings.
* @s1: First string to compare.
* @s2: Last string to compare.
* Return: Diference between first character difference or 0.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
