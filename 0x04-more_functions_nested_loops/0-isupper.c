#include "main.h"
#include <stdlib.h>

/**
 * _isupper - this checks for uppercase character
 * @c: this is the character to be checked
 * Return: 1 if c is an upppercase. 0 otherwise
 */
int _isupper(ini c)
{

if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
