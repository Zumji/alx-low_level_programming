#include "main.h"


/**
 * print_last_digit - it prints the last digit of a num
 * @n: it is the int in the question
 * Return: - the value of the last integer
 */
int print_last_digit(int n)
{
	last = (n % 10);

	if (last >= 0)
		_putchar(n);		
	else
		return (n);
}
