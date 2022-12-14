#include "main.h"

/**
 * print_alphabet_x10 - emtry point
 *
 * Return 0
 */
void print_alphabet_x10(void)
{
int num = 0;
char c = 'a';
for (num = 0; num <= 9; num++)
{

for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
num++;
}
}
