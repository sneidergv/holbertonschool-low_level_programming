#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Write a function that prints numbers, followed by a new line.
* @separator: string.
* @n: numbers of arguments.
* Return: 0 if n = 0, sum.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list cp;

	va_start(cp, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(cp, int));
		if (i < (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
