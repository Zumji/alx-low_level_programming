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
for (n = 48; n <= 59;)
{
	putchar(n);
	putchar(',');
	n++;
}
		if (n != 58)
{
			putchar(' ');
}
putchar('\n');
return (0);
}
