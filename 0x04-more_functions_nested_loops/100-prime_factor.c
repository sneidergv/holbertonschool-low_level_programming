#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor number.
 * Return: 0.
 */

int main(void)
{
	long number = 612852475143;
	long i;

	while (number % 2 == 0)
	{
		number = number / 2;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			number = number / i;
		}
	}

	if (number > 2)
		printf("%lu", number);
	printf("\n");

	return (0);
}

