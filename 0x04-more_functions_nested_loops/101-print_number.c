#include "holberton.h"

/**
* print_number - prints an integer.
*
* @n: int to print.
*
* Return: void.
*/

void print_number(int n)
{
	int mil, cen, dec, uni;

	/*Convertir n a positivo sí es negativo*/
	mil = n / 1000;
	cen = (n / 100) % 10;
	dec = (n / 10) % 10;
	uni = n % 10;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		mil *= -1; cen *= -1; dec *= -1; uni *= -1;
	}

	/* Sí n tiene 1 dígito.*/
	if ((n >= 0) && (n < 10))
	{
		_putchar(uni + '0');
	}
	/* Sí n tiene 2 dígitos.*/
	else if ((n > 9) && (n < 100))
	{
		_putchar(dec + '0');
		_putchar(uni + '0');
	}
	/* Sí n tiene 3 dígitos.*/
	else if ((n > 99) && (n < 1000))
	{
		_putchar(cen + '0');
		_putchar(dec + '0');
		_putchar(uni + '0');
	}
	/* Sí n tiene 4 dígitos.*/
	else if ((n > 999) && (n < 10000))
	{
		_putchar(mil + '0');
		_putchar(cen + '0');
		_putchar(dec + '0');
		_putchar(uni + '0');
	}
}
