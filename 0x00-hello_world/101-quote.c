#include <unistd.h>

/**
 * main - print a string in stderr
 * Return: 1
 */

int main()
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, str, 60);
    return (1);
}
