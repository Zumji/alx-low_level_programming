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
	int num;

srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (n > 0)
{
printf("Last digit of %d is %d and is greater than 5\n" n, num);
}
else if ((n < 6) && (n != 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n" n, num);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n" n, num);
}
return (0);
}
