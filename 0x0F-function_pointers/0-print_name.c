#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - Write a function that prints a name.
* @name: Name to print.
* @f: pointer to function.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
