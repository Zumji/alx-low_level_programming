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
char letter = 'f';

while (hexidecimal <= '9')
{
putchar(hexidecimal);
hexidecimal++;
}
if (letter >= 'a')
{
	putchar(letter--);
}
putchar('\n');
return (0);
}
