#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 47; n <= 56; n++)
{
putchar(n);
putchar(',');
}
if (n != 57)
{
putchar(' ');
}
putchar('\n');
return (0);
}
