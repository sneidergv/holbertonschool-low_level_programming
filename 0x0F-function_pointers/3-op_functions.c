#include "3-calc.h"

/**
* op_add - op function to add two numbers.
* @a: first number.
* @b: second number.
* Return: Add of two numbers.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - op function to substraction between two numbers.
* @a: first number.
* @b: second number.
* Return: substraction of two numbers.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - op function to multiply two numbers.
* @a: first number.
* @b: second number.
* Return: Multipply of two numbers.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - op function to divide two numbers.
* @a: first number.
* @b: second number.
* Return: Divide between two numbers.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - op function to get the module of two numbers.
* @a: first number.
* @b: second number.
* Return: Module of two numbers.
*/

int op_mod(int a, int b)
{
		if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
