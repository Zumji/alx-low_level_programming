#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinate two strings
 * @s1: String to concatinate
 * @s2: other string to concatinate
 * Return: pointer to the new string created (success), or NULL (ERROR)
 */

char *str_concat(char *s1, char *s2)
{
	char *nstr;
	unsigned int i = 0, size;
	unsigned int j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + len2;
	nstr = malloc((sizeof(char) * size) + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
		nstr[i] = s2[j];
	i++;
	j++;
}
return (nstr);
}
