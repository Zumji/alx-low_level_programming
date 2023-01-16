#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the characters c to the stdout
 * @c: the character to print
 * Return: on success 1
 * on Error,-1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
