#include "main.h"

/**
 *  _isalpha - Checks for char alphabet
 * @c: - the char to be checked
 * Return: 1 if char is letter upper or lower, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' c <= 'z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
