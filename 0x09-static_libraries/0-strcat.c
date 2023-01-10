#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - concatinate two strings
 * @dest: The string to be append
 * @src: The string to be  appended to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
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
