#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strncat - continate two string using at most
 * an imputed number of bytes from src
 * @dest: one of the string to be continated
 * @src: the other string to be appended to dest
 * @n: the number of bytes from src
 * Return: return the pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0';)
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0';)
	{
		i++;
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	}

	return (dest);
}
