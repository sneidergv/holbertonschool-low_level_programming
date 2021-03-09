#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog - function that creates a new dog.
* @name: name of hte dog.
* @age: age of the dog.
* @owner: owner of the dog.
* Return: NULL or structure.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mahler;
	int name_len = _strlen(name);
	int owner_len = _strlen(owner);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	mahler = malloc(sizeof(dog_t));
	if (mahler == NULL)
		return (NULL);

	mahler->name = malloc((name_len + 1)  * sizeof(char));
		if (mahler->name == NULL)
		{
			free(mahler);
			return (NULL);
		}

	mahler->owner = malloc((owner_len + 1) * sizeof(char));
		if (mahler->owner == NULL)
		{
			free(mahler->name);
			free(mahler);
			return (NULL);
		}

	mahler->name = _strcpy(mahler->name, name);
	mahler->owner = _strcpy(mahler->owner, owner);
	mahler->age = age;

	return (mahler);
}

/**
* _strlen - Write a function that returns the length of a string.
* @s: pointer to reassign.
* Return: returns the length of a string.
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}

	return (i);
}

/**
* _strcpy - function that copies the string.
*
* @dest: array that recieve's the copy.
* @src: array to copy.
*
* Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
