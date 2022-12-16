#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - it is use to print numbers <= 98 and numbers
 * >= 98
 *@n: it is the int in the question
 *Return: return the printed numbers
 */
void print_to_98(int n)
{

	if (n < 98)
	{
	while (n <= 98)
	printf("%d", n++);
	}
	if (n != 98)
	{
	printf(",");
	}
	else if (n > 98)
	{
	while (n >= 98)
	printf("%d", n++);
	}
	if (n != 98)
	{
	printf(",");
	}
	else
	{
	printf("98");
	}
	printf("\n");
}
