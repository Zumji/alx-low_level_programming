#include "main.h"


/**
 * print_last_digit - it prints the last digit of a num
 * @n: it is the int in the question
 * Return: - the value of the last integer
 */
int print_last_digit(int n)
{
	int last;

	last = (n % 10);
	if (last < 0)
	{
		last += -1;
	}
	_putchar(last + '0');
	{

	return (last);
	}
}
