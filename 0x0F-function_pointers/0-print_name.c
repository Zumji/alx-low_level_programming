#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: function point.
 * Return: void
 */
void print_name(*name, void (*f) (char *))
{
	if (!name || !f)

		return;

		f(name);
}
