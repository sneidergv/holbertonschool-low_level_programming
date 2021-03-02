#include <stdio.h>

/**
* main - program that prints all arguments it receives.
* @argc: argument count.
* @argv: argument vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}
