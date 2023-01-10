#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of the set of bytes
 * @s: First string
 * @accept: second string
 * Return: A pointer to the bytes in a s that matches on of the
 * bytes in accept, or nul if no such bytes is found
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
return (s + i);
}
}
return ('\0');
}
