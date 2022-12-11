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
int n = 0;
if (n > 0)
{
putchar(n);
n++;
}
else if (n < 9)
{
putchar(n);
n++;
}
else if (n == 9)
putchar(',');
}
putchar('\n');
return (0);
}
