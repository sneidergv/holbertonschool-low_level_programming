#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers.
*
* Return: Always 0.
*/

int main(void)
{
	int firts_number, second_number;

	for (firts_number = 0; firts_number <= 98; firts_number++)
	{
		for (second_number = (firts_number + 1); second_number <= 99;
		second_number++)
		{
			putchar((firts_number / 10) + '0');
			putchar((firts_number % 10) + '0');
			putchar(' ');
			putchar((second_number / 10) + '0');
			putchar((second_number % 10) + '0');
			if (firts_number == 98 && second_number == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
