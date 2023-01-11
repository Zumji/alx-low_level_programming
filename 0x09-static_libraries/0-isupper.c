#include "main.h"
#include <stdio.h>
/**
 * _isupper - this checks for uppercase character
 * @c: this is the checracter to be checked
 * Return: 1 if c is an uppercase. 0 otherwise
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
