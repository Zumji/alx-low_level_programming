#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *_atoi - converts  string to an integer
 *@s: input string.
 *Return: integer
 */

int _atoi(char *s)
{
unsigned int count = 0;
int size = 0;
unsigned int pn = 1;
unsigned int m = 1, i;
int oi;
while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
break;
if (*(s + count) == '-')
pn *= -1;
if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
oi = oi + ((*(s + i) - 45) * m);
m /= 10;
}
return (oi *pn);
}
