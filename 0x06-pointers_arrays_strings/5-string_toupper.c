#include "main.h"

/**
 *string_toupper - function that change all lowercase letters
 *of a string to uppercase
 *@char: pointer to char
 *Return: char
 */
char *string_toupper(char *)
{
int i = 0;

while (*(ch + 1) != '\0')
{
if (*(ch + i) >= 97 && *(ch + i) <= 222)
*(ch + i) = *(ch + i) - ' ';
i++;
}
return (ch);
}
