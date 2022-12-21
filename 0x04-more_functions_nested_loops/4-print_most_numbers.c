#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers: this prints the number from 0 to 9
 * with the exception of 2 and 4. this then follow by a new line
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i != 2 && != 4)
		{
			putchar(i + '0');
		}
	}
		putchar('\n');
	}
