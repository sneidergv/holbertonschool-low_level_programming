#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - function that prints a struct dog.
* @d: structure to print.
* Return: void.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL)
	? printf("Name: (nil)\n")
	: printf("Name: %s\n", d->name);

	(d->age < 0)
	? printf("Age: (nil)\n")
	: printf("Age: %1f\n", d->age);

	(d->owner == NULL)
	? printf("Owner: (nil)\n")
	: printf("Owner: %s\n", d->owner);
}
