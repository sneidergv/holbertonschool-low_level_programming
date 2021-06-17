#include <unistd.h>

/**
 * main - print a string in stderr
 * Return: 1
 */
int main()
{
    write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 87);
    return (1);
}
