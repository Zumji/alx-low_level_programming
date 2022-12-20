#include "main.h"
#include <stdio.h>

/**
 * print_rev - it prints string in the revise order.
 * @s: it is the string to be printer
 * Return: it is to return the string
 */

void print_rev(char *s)
{
int c = 0;

while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
