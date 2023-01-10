#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_abs - computes the abs value of an integer
 *@c: the int in the question
 *Return: the absolute of the integer
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (-c);
}
