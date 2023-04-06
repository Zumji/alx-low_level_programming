#include "main.h"
#include <stdio.h>

/**
 * _puts - this function prints a string
 * @str: This is the string character in the function
 * Return: return the string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)

	{
		putchar(*str);
	}
	putchar('\n');
}
