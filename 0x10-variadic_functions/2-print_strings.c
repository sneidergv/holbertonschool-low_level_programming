#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - Write a function that prints strings, followed by a new line.
* @separator: string between strings.
* @n: numbers of args.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list cp;

	va_start(cp, n);
	for (i = 0; i < n; i++) // 0, 1
	{
		tmp = va_arg(cp, char*);

		(tmp == NULL)
		? printf("(nil)")
		: printf("%s", (va_arg(cp, char*)));

		if (separator != NULL)
		{
			if (i < (n - 1))
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(cp);
}
