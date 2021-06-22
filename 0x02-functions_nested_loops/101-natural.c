#include <stdio.h>

/**
 * main - program that prints multiplies numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int number = 1024;
	int i, sum = 0;

	for (i = 1; i < number; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

