#include "holberton.h"

/**
 * main - entry point
 * 
 * description: print "holberton" with putchar.
 * 
 * return: Always 0.
 */

int main(void)
{
  char a;

  char i;

  char h[] = "holberton\n";

  for (i = 0; i < 10; i++)
  {
    a = h[i];

    _putchar(a);
  }
  return 0;
}