#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer.
* @str: String to copy.
* Return: Null or pointer to copy of string.
*/

char *_strdup(char *str)
{
	int length, index;
	char *nArray;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
		;
	length++;

	nArray = malloc(length * sizeof(char));

	if (nArray == NULL)
		return (NULL);

	for (index = 0; index < length; index++)
	{
		nArray[index] = str[index];
	}
	return (nArray);
}
