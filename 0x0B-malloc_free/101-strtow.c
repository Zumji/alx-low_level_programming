#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
* word_len - Locates the index marking the end of the
* first word contained within a string
*@str: The string to be searched.
*Return: The index marking the end of the initial word pointed to by str.
*
*/

int word_len(char *str)
{
int index = 0, len = 0;

while (*(str + index) && *(str + len) != ' ')
{
index++;
len++;
}
return (len);
}

/**
*count_words - counts the number of words contained within a string
*@str: the string to be searched
*Return: the value of str
*/

int count_words(char *str)
{
int index = 0, words = 0, len = 0;

for (index = 0; *(str + index); index++)
len++;
for (index = 0; index < len; index++)
if (*(str + index) != ' ')
words++;
index += word_len(str + index);
return (words);
}

/**
*strtow - splits a string into words
*@str: The string to be splited
*Return: If str = NULL, str = "", or the function fails.
*Null otherwise. a pointer to an array of strings(words)
*/

char **strtow(char *str)
{

char **strings;
int index = 0, words, w, letters, i;

if (str == NULL || str[0] == '\0')
return (NULL);

words = count_words(str);
if (words == 0)
return (NULL);
strings = malloc(sizeof(char *) * (words + 1));

if (strings == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;
return (strings);
for (w = 0; w < words; w++)
while (str[index] == ' ')
index++;
letters = word_len(str + index);
strings[w] = malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (i = 0; i < letters; i++)
strings[w][i] = str[index++];
strings[w][i] = '\0';
}
strings[w] = NULL;
return (strings);
}
