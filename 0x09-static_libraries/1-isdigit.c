#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *_isdigit - This checks for digit (0 - 9)
 *@c: this is the digit to be checked
 *Return: 1 if c is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

