#include <unistd.h>

int main()
{
    write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 87);
    return (1);
}
