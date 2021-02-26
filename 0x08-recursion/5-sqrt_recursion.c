#include "holberton.h"
int sqrt_aux(int n, int i);

/**
* _sqrt_recursion - function that returns the
* natural square root of a number.
* @n: integer to analize.
* Return: Natural square root.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_aux(n, 1));
	}
}

/**
* sqrt_aux - function that compare an index with n.
* @n: number to analize.
* @i: auxiliar index.
* Return: Natural square root.
*/

int sqrt_aux(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_aux(n, i + 1));
	}
}
