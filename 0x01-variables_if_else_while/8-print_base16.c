#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char hexidecimal = 'a';

while (hexidecimal <= 'e')
{
putchar(hexidecimal);
hexidecimal++;
}
putchar('\n');
return (0);
}
