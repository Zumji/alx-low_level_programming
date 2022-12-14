#include "main.h"

/**
 * print_alphabet_x10 - emtry point
 *
 * Return 0
 */
void print_alphabet_x10(void)
{
char c = 'a';
int num = '0';

for (c = 'a'; c <= 'z'; c++)
for (num = '0'; num <= '9'; num++)
{
_putchar(c);
}
_putchar('\n');
}
