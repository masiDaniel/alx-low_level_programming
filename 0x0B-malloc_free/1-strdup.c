#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - replicates a new memory space
 * @str: char
 * Return: 0 allways
 */

char *_strdup(char *str)
{
char *swap;
int a, b = 0;

if (str == NULL)
{
return (NULL);
}

while (str[a] != '\0')
a++;

swap = malloc(sizeof(char) * (a + 1));

if (swap == NULL)
{
return (NULL);
}
for(; str[b]; b++)
{
swap[b] = str[b];
}
return (swap);
}
