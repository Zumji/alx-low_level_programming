#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: function point.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		return;

	f(name);
}
