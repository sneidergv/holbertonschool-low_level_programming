#include "holberton.h"

/**
* _abs - computes the absolute value of an integer.
*
* @a: entry to compute.
*
* Return: Always 0.
*/

int _abs(int a)
{
	if (a < 0)
	{
		a *= -1;
	}
	else
	{
		a *= 1;
	}
	return (0);
}
