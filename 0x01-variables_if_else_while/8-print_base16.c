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
char letter;

while (hexidecimal <= '9')
{
putchar(hexidecimal);
hexidecimal++;
}
for (letter = 'a'; letter <= 'f'; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
