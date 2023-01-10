#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*_isupper - this  checks is a uppercase
*@c: This is the character to be checked
*Return: 1 if c is an uppercase. 0 otherwise
*/

int _isupper(int c)
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
