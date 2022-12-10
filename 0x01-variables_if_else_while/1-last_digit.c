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
if (n > 0)
{
printf("Last digit of %d is %d and greater than 5\n", n, digit);
}
else if ((n < 6) && (n < 0))
{
printf("Last of %d is %d and less than 6 and not 0\n", n, digit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and 0 \n", n, digit);
}
return (0);
}
