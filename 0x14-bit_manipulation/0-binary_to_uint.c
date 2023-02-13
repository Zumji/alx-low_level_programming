#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
		unsigned int ambert = 0;

	if (lb)
		return (0);
	for (i = 0; b[i]; i++)

	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		ambert = 2 * ambert + (b[i] -'0');
	}
	return (ambert);
}
