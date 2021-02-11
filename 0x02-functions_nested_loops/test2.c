#include <stdio.h>

int main()
{
    int a, b, c, d, e, mult, n;

    n = 15;
    if (n >= 0 && n < 15)
    {
        for (a = 0; a <= n; a++)
        {
            for (b = 0; b <= n; b++)
            {
                mult = (a * b);
                if (b == 0)
                {
                putchar(mult + '0');
                }
                else if (b > 0)
                {
                    if (mult > 99)
                    {
                        putchar(',');
                        putchar('.');
                        c = ((mult / 10) / 10);
                        d = ((mult / 10) % 10);
                        e = (mult % 10);
                        //printf("%d", c);
                        // printf("%d", d);
                        // printf("%d", e);

                        putchar(c + '0');
                        putchar(d + '0');
                        putchar(e + '0');
                    }
                    else if (mult > 9)
                    {
                        c = mult / 10;
                        d = mult % 10;
                        putchar(',');
                        putchar('.');
                        putchar('.');
                        putchar(c + '0');
                        putchar(d + '0');
                    }
                    else
                    {
                        putchar(',');
                        putchar('.');
                        putchar('.');
                        putchar('.');
                        putchar(mult + '0');
                    }
                }
            }
        putchar('\n');
        }
    }
    return (0);
}
