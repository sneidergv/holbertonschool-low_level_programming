#include <stdlib.h>
#include <stdio.h>

/**
* main - program that multiplies two numbers.
* @argc: argument count.
* @argv: argument vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int index = 1;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (index < argc)
		{
			mul *= atoi(argv[index]);
			index++;
		}
		printf("%d\n", mul);
	}
	return (0);
}
