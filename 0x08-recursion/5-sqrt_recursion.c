#include "main.h"
/**
 *helperfunction - checks if square of number exists
 *@num: number in the function
 *@psqrt: sqrt of number of -1 for error
 *Return: no return
 */
int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
		{
			return (-1);
		}
		else
		{
			return (helperfunction(num, psqrt + 1));
		}
	}
}
/**
 *_sqrt_recursion - returns the natural squares root of a number
 *@n: number of square of
 *
 * Return: square root n
 * -1 if n does not have a natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helperfunction(n, 0));
	}
}
