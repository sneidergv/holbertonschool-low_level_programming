#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly
* allocated space in memory, which contains a copy of
* the string given as a parameter.
* @str: String to copy.
* Return: Null or pointer to copy of string.
*/

char *_strdup(char *str)
{
	int length = 0;
	char *nArray;

	while (str[length])
		length++;

	nArray = malloc(length * sizeof(char));

	if (nArray == NULL)
		return (NULL);

	int index;

	for (index = 0; index < length; index++)
	{
		nArray[index] = str[index];
	}
	return (nArray);
}
