#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*argstostr - prints argment
*@ac: takes in widtth of grid
*@av: height of grid
*Return: return argstost
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, a = 0, b = 0, c = 0;

if (ac == 0 || av == NULL)
	return (NULL);

while (a < ac)
{
b = 0;
while (av[a][b] != '\0')
{
	count++;
	b++;
}
a++;
}
count = count + ac + 1;
str = malloc(sizeof(char) * count);
if (str == NULL)
{
	return (NULL);
}
for (a = 0; a < ac; a++)
{
	for (b = 0; av[a][b] != '\0'; b++)
	{
		str[c] = av[a][b];
		c++;
	}
	str[c] = '\n';
	c++;
}
return (str);
}
