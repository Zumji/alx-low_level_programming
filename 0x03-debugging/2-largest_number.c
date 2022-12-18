#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{

int a, b, c;

if (a > b && b > c)
{
printf(" the largest number is: %d\n", a);
}
else if (b > a && a > c)
{
printf("the largest number is : %d\n", b);
}
else
{
printf("The largest number is :%d\n", c);
}
return (largest);
}
