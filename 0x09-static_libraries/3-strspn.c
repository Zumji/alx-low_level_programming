#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *_strspn - gets the length of a prefix subtracting
 *@s: initial segment
 *@accept: accepted bytes
 *Return: The number o accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, bool;

for (i = 0; *(s + i) != '\0'; i++)
{
bool = 1;

for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (i);
}
