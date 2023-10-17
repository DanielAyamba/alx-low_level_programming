#include "main.h"

/**
 * print_new - Print a string in reverse.
 * @s: The string to reverse and print.
 */

void print_new(char *s)
{
int i;
int count = 0;

while (s[count] != '\0')
count++;

for (i = count - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
