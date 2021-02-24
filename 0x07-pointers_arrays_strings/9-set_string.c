#include "holberton.h"

/**
* set_string - function that sets the value of a pointer to a char.
* @s: Pointer to pointer to assign.
* @to: Pointer.
* Return: void.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
