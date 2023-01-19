#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concantinate n bytes of string to another string
 * @s1: string to append to
 * @s2: string to concatinate from
 * @n: number of bytes from s2 to concatinate to s1
 * Return: Return pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, k;

if (s1 == NULL)
i = 0;
else
{
	for (i = 0; s1[i]; i++)
		;
}
if (s2 == NULL)
j = 0;
else
{
	for (j = 0; s2[j]; j++)
		;
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + i));
if (s == NULL)

return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[k + i] = s2[k];
s[i + j] = '\0';
return (s);
}


