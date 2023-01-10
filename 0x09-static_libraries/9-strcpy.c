#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcpy - this copies the pointer src including the terminating null
 * @dest: this is the destination value
 * @src: source value
 * Return: this is expected to return the string copies
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
