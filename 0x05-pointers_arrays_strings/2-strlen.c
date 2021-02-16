#include "holberton.h"

/**
* _strlen - Write a function that returns the length of a string.
*
* @s: pointer to reassign.
*
* Return: returns the length of a string.
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
