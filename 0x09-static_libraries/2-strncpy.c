#include "main.h"

/**
 * _strncpy - the function that copies the string
 * @dest: pointer to the destination char
 * @src: pointer to the source char
 * @n: pointer of bytes
 * Return: this return the char
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && *(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
while (i != n)
{
dest[i++] = '\0';
}
return (dest);
}
