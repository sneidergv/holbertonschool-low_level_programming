#include <stdio.h>

int main(void)
{
    int hours, mins, firs_digit, second_digit, 
    third_digit, four_digit;

    // Ciclo de Horas
    for (hours = 0; hours < 24; hours++)
    {
        // Ciclo de Minutos
        for (mins = 0; mins < 60; mins++)
        {
            // Calculamos el primer digito de $hours
            firs_digit = hours / 10;
            // Calculamos el último digito de $hours
            second_digit = hours % 10;
            // Calculamos el primer digito de $mins
            third_digit =  mins / 10;
            // Calculamos el último digito de $mins
            four_digit = mins % 10;

            // Imprimimos los dos digitos de $hours
            putchar(firs_digit + '0');
            putchar(second_digit + '0');
            // Imprimimos el signo ":"
            putchar(':');
            // Imprimimos los dos digitos de $mins
            putchar(third_digit + '0');
            putchar(four_digit + '0');

            // Hacemos salto de linea después de "00:00"
            putchar('\n');
        }
    }
}