#include "main.h"


/**
 * print_last_digit - it prints the last digit of a num
 * @n: it is the int in the question
 * Return: - the value of the last integer
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n >= 10)
		_putchar(n);
			
	else
		return (0);
}
