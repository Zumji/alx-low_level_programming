#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list print;
unsigned int i;
char *str;

va_start(print, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(print, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

}
printf("\n");
va_end(print);
}
