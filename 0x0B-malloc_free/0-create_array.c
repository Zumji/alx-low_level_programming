#include "main.h"
#include <stdio.h>
/**
 * create_array - create array of size and assign char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, null if fail
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int i;

if (size == 0)
{
return (NULL);
}
buff = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size)
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
