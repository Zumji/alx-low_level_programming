#include "main.h"

/**
 *strcat - concatinante two strings
 * @dest: the string to be appended
 * @src: the string to be appended to dest
 * Return: dest
 */
char *strcat(char *dest, char *src)
{
	char *dest_end = dest;

		while (*dest_end != '\0')
		{
			dest_end++;
		}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}
