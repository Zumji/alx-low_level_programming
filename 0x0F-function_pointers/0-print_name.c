#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: function point.
 * Return: void
 */
void print_name(*name, void (*f) (char *))
{
	if (name == NULL || f == NULL)

		return;

		f(name);
}
