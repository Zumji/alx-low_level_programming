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
	char alphabet;
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			putchar (alphabet);
			alphabet++;
		}
	alphabet = 'A';
		while (alphabet <= 'Z')
		{
			putchar (alphabet);
			alphabet++;
		}
	putchar('\n');
	return (0);
}

