#include <string.h>
#include <stdio.h>

int main(void){
	char *a = "Hola";
	char *b = strdup(a);
	printf("%s", b);

	return 1;
}