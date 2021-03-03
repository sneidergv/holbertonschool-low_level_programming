#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - function that concatenates two strings.
* @s1: First string to concatenate.
* @s2: Second string to concatenate.
* Return: Pointer to New String.
*/

char *str_concat(char *s1, char *s2)
{
	int lenght_s1, lenght_s2, index_1, index_2;
	char *nArray;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s1 = "";
	}

	for (lenght_s1 = 0; s1[lenght_s1]; lenght_s1++)
		;
	for (lenght_s2 = 0; s2[lenght_s2]; lenght_s2++)
		;

	nArray = malloc((lenght_s1 + lenght_s2 + 1) * sizeof(char));

	if (nArray == NULL)
	{
		return (NULL);
	}

	for (index_1 = 0; index_1 < lenght_s1; index_1++)
	{
		nArray[index_1] = s1[index_1];
	}

	for (index_2 = 0; index_2 < (lenght_s1 + lenght_s2); index_2++)
	{
		nArray[index_1] = s2[index_2];
		index_1++;
	}

	nArray[index_1] = '\0';

	return (nArray);
}
