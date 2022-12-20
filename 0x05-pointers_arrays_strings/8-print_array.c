#include "main.h"
#include <stdio.h>

/**
 *print_array - it prints n element of an integer
 *@a: Array of integers
 *@n: number of element of the aray to be printed
 * Return: the return is void
 */

void print_array(int *a, int n)
{
	int j;

	for (j =  0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n + 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
