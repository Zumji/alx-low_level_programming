#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: the num to be checked
 * Return: 1 and prints + if n is great then zero,
 * 0 and prints 0 if n is zero,
 *  -1 and prints - if the n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	if (n == 0)
	{
	_putchar(n);
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
}
