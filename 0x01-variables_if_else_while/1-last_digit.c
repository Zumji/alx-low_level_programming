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
printf("Last digit of $n is $num and is greater than 5\n");
}
else if ((n < 6) && (n != 0))
{
printf("Last digit of $n is $num and is less than 6 and not 0\n");
}
else if (n == 0)
{
printf("Last digit of $n is $num and is 0 \n");
}
return (0);
}
