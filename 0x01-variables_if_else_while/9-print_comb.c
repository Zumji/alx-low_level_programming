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
for (n = 12; n < 22; n++)
{
	putchar(n);
}
if (n != 21)

{
	putchar(',');
	putchar(' ');
}

putchar('\n');
return (0);
}
