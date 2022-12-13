#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
putchar(',');
}
if (n != 58)
{
putchar(' ');
}
putchar('\n');
return (0);
}
