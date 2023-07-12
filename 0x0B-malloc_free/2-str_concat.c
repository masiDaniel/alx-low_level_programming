#include "main.h"
#include <stdlib.h>

/**
 * str_concat - joins together two strings
 * @s1: string 1 to be joined
 * @s2: second string to be joined
 * Return: the string formed after joining
 */

char *str_concat(char *s1, char *s2)
{
char *newstring;
int i, j;
i = j = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;

newstring = malloc(sizeof(char) * (i + j + 1));

if (newstring == NULL)
return (NULL);

i = j = 0;
while (s1[i] != '\0')
{
newstring[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
newstring[i] = s2[j];
i++, j++;
}

newstring[i] = '\0';

return (newstring);
}
