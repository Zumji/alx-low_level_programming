#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *_strstr - this function finds the first occurences of the substring
 * needle in the string haystack
 * @haystack: entring string
 * @needle: subtring
 * Return: pointer to the beggining of located substring or
 * null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;

while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;
}
while (*haystack != '\0' && *pneedle != '\0'  && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
{
return (bhaystack);
haystack = bhaystack + 1;
}
return (0);
}
