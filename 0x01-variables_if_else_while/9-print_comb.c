#include <stdio.h>
#include <conio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	clrscr();
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
getchar();
return (0);
}
