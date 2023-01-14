 #include <stdio.h>
#include "main.h"
/**
 * _putchar - write the character c stdio
 * @c: the character to be printed
 * Return: on success 1
 * on error. -1 is returne and error is set appropraite 
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
