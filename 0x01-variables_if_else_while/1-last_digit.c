#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point.
 *
 * Return: Alwys 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int x = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, x);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
	}
	else if (n < 6)
	{
		printf("Last digit of %i is %i and is 0\n", n, x);
	}
	return (0);
}
