#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - this draw a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{

int i, j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
}
_putchar('\n');
}
}

