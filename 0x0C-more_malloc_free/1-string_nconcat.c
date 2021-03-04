#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: Number of bytes to concatenate from s2.
* Return: Pointer to concatenate array or NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenght_s2 = 0, lenght_s1 = 0, lenght_nA;
	unsigned int index_1, index_2;
	char *nArray;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[lenght_s1])
		lenght_s1++;

	while (s2[lenght_s2])
		lenght_s2++;

	if (n >= lenght_s2)
		n = lenght_s2;

	lenght_nA = (lenght_s1 + n) + 1;

	nArray = malloc(lenght_nA * (sizeof(char)));

	if (nArray == NULL)
		return (NULL);

	for (index_1 = 0; s1[index_1]; index_1++)
		nArray[index_1] = s1[index_1];

	for (index_2 = 0; index_2 < n; index_2++)
	{
		nArray[index_1] = s2[index_2];
		index_1++;
	}

	lenght_nA++;

	nArray[lenght_nA] = '\0';

	return (nArray);
}
