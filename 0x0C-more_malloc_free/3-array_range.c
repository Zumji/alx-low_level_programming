#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - it create an array of integer
 * @min: first  integer number
 * @max: last integer number
 * Return: poiinter to the newly allocated memory or NuLL if fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + l;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
