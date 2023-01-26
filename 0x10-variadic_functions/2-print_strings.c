#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @....: A variables of number to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index

va_start(strings, n);

for (index = 0; index < n; index++)
{
va_start(strings, char *);
if (str == NULL)
	printf("(nil)");
else
	printf("%s", str);

if (index != (n - 1) && separator != NULL)
printf("%s", separator);

}
printf("\n");
va_end(strings);
}
