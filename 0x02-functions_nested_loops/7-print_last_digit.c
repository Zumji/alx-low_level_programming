#include "main.h"


/**
 * print_last_digit - it prints the last digit of a num
 * @n: it is the int in the question
 * Return: - the value of the last integer
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n >= 98)
		return (last);
	else
		return (0);
}
