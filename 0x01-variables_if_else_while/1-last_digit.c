#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - main function to generate a random number
 *
 *  Return: Always 0 (Success)
 *
*/
int main(void)
{
	int n;
	int digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (n > i)
{
printf("Last digit of %d and %d is greater than 5\n", digit);
}
else if ((n < 6) && (n < 0))
{
printf("Last of %d and %d is less than 6 and not 0\n", digit);
}
else if (n == 0)
{
printf("Last digit of %d and is 0 \n", digit);
}
return (0);
}
