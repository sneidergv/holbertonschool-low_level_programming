#include "holberton.h"

/**
 * times_table - prints 9 times table.
 *
 * Return: void
 */

void times_table(void)
{
    int i, j;
    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            _putchar(i * j);
        }
    _putchar('\n');
    }
}
