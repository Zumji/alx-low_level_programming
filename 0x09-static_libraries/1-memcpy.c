#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 *_memcpy - copies  memory area
 *@dest: destination memory area
 *@src: Source memory area
 *@n: bytes filled
 *Return: the pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		}
	return (dest);
}
