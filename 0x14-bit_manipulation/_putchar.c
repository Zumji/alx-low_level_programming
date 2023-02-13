#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to point
 * Return: on success 1 on error, 
 * -1 is returned and error is set appropriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
