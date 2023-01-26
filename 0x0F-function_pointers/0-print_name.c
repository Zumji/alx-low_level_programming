#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name to the function
 * @name: pointer to name to the name of the function
 * @f: function point in the question
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{

	f(name);
	}
}
