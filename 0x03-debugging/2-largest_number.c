#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	a = 972;
	b = -98;
	c = 0;

if (a > b && b > c)
{
printf("%d is the largest number\n", a);
}
else if (b > a && b > c)
{
	printf("%d is the largest number\n", b);
}
else
{
	printf("%d is the largest number\n", c);
}
return (0);
}
