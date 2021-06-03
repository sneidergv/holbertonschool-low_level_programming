#include "prog1.h"
#include "file3.h"
#include <stdio.h>

int main(void)
{
    use_it();
    global_variable += 19;
    use_it();
    printf("Increment: %d\n", increment());
	printf("%d", global_variable); /* Print the real state of global_variable */
    return 0;
}