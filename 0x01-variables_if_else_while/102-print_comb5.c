#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers.
*
* Return: Always 0.
*/

int main(void)
{
	int first_digit, second_digit, third_digit, fourth_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = 0; second_digit <= 9; second_digit++)
		{
			for (third_digit = first_digit; third_digit <= 9; third_digit++)
			{
				for (fourth_digit = (second_digit + 1); fourth_digit <= 9; fourth_digit++)
				{
					putchar(first_digit + '0');
					putchar(second_digit + '0');
					putchar(' ');
					putchar(third_digit + '0');
					putchar(fourth_digit + '0');
					if (first_digit == 9 && second_digit == 8 &&
					third_digit == 9 && fourth_digit == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
