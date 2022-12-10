#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int hexidecimal = '0';
char letter = 'a';

while (hexidecimal <= '9')
{
putchar(hexidecimal);
hexidecimal++;
}
if (letter < 'f')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
