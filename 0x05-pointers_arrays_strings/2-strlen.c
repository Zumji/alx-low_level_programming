#include "main.h"
#include <stdio.h>
/**
 * _strlen - this function prints out the length of a string
 * @s: is the address of the string
 * Return: the value of the length of the string
 */
int _strlen(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{	
		count++;
	}
			return (count);
			}
