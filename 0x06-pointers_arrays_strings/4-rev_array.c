#include "main.h"

/**
 *reverse_array - reverse the array
 *@a: is a pointer in the function
 *@n: array length
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0, t;

for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[i];
a[n] = t;
}
}
