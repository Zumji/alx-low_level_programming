#include "main.h"
#include <stdio.h>

/**
 * more_numbers - this prints 10 times numbers, from 0 to 14.
 * this follow by a new line
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
putchar(j / 10 + '0');
putchar(j % 10 + '0');
}
putchar('\n');
}
}
