#include <stdio.h>

int main()
{
    int mins;
    int a;

    for (mins = 0; mins <= 59; mins++)
            putchar('0');
            putchar(hours + '0');
            putchar(58);
    {
        if (mins < 10)
        {
            putchar('0');
            putchar(mins + '0');
            putchar('\n');
        }
        else if ((mins > 9) && (mins < 20))
        {
            putchar('1');
            a = mins - 10;
            putchar(a + '0');
            putchar('\n');
        }
        else if ((mins > 19) && (mins < 30))
        {
            putchar('2');
            a = mins - 20;
            putchar(a + '0');
            putchar('\n');
        }
        else if ((mins > 29) && (mins < 40))
        {
            putchar('3');
            a = mins - 30;
            putchar(a + '0');
            putchar('\n');
        }
        else if ((mins > 39) && (mins < 50))
        {
            putchar('4');
            a = mins - 40;
            putchar(a + '0');
            putchar('\n');
        }
        else
        {
            putchar('5');
            a = mins - 50;
            putchar(a + '0');
            putchar('\n');
        }
    }
    return (0);

}




for (mins = 0; mins <= 59; mins++)