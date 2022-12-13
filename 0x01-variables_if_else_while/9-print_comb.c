#include <stdio.h>
#include <conio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
clrscr();
{
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
getch();
return (0);
}
