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
va_list nums;
unsigned int index;

va_start(nums, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

}
printf("\n");
va_end(nums);
}