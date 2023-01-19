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
	int i;
	int *ar;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}
	return (ar);
}
