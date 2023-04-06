#include "main.h"

/**
 * _strncat - concatinantes two string using at most
 * an imputed number of bytes from src
 * @dest: one of the string to be appended
 * @src: the other string to be appended to dest
 * @n: the number of bytes from src
 * Return: return the pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dex = 0, dest_len = 0;
	while (dest[dex++])
		dest_len++;
	for (dex = 0; src[dex] && dex < n; dex++)
			dest [dest_len++] = src[dex];
			return (dest);
			}
