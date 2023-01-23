#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * array_iterator - function that excutes function given as parameter
 * @array: arrat of elements
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
