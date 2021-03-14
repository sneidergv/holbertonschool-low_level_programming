#include "3-calc.h"

/**
* get_op_func - selects the correct function to
* perform the operation asked by the user.
* @s: Operator input by the user.
* Return: The function matched with the user input.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
	}
	return (ops[i].f);
}
