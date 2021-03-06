#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - Write a function that returns the sum of
* all its parameters.
* @n: number of parameters.
* Return: 0 if n = 0, sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list cp;

	if (n == 0)
		return (0);


	va_start(cp, n);

	for (i = 0; i < n; i++)
		sum += va_arg(cp, int);

	va_end(cp);
	return (sum);
}
