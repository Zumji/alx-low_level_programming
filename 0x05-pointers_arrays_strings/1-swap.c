#include "main.h"
/**
 * swap_int - this function is to swap value of int a and int b
 * @a: is the first integer
 * @b: This is the second integer
 * Return: this is to return the value of the integer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
