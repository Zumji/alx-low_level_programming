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
	char alphabet = 'z';

		while (alphabet >= 'a')
		{
			putchar(alphabet);
			alphabet--;
		}
	putchar('\n');
	return (0);
}
