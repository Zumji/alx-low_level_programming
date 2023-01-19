#include "main.h"
#include <stdlib.h>
/**
 * _calloc - it allocates memory for an array using malloc
 * @nmemb: number of element in an array
 * @size: size in bytes of the elements
 *
 * Return: void pointers to allocated memmory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
