#include "main.h"
#include <stdio.h>
/**
 * main - prints the number from 1 to 100 followed by a new line
 * but for the mulpilication of 3 prints fizz instead of the number
 * and for the multiplication of 5 prints buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
	{
		printf("Fizz");
		printf(" ");
	}
	if (i % 5 == 0)
	{
		printf("Buzz");
		printf(" ");
	}
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz");
		printf(" ");
	}
	if (i % 3 != 0 && i % 5 != 0)
	{
		printf("%d", i);
		printf(" ");
	}
}
printf("\n");
return (0);
}
