#include "main.h"
#include <stdio.h>
/**
 * _strcpy - this copies the pointer to be src including the terminating null
 * @dest:	This is the destinaion value
 * @src:	Source value
 * Return: it is expected to return the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (1 = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

