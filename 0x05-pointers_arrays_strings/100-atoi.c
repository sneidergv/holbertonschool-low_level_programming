#include <stdio.h>
#include <limits.h>
#include "holberton.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string to convert an integer.
 * Return: integer from str.
 */

int _atoi(char *s)
{
	int base = 0, sign = 1, i = 0, flag = 0;

	while (s[i] == ' ')
		i++;

	while (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10
			&& s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = 10 * base + (s[i++] - '0');
		flag = 1;
		}
		else
		{
			if (flag == 1)
				return (base * sign);
			i++;
		}
	}
	return (base * sign);
}
