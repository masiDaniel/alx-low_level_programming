#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - it concatinates n bytes from string 1 to string 2
 * @s1: destination of appending
 * @s2: source from which we append
 * @n: no of bytes from s2
 * Return: pointer to the final string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int i, j, length1, length2;
i = j = length1 = length2 = 0;

while (s1 && s1[length1])
length1++;
while (s2 && s2[length2])
length2++;
if (n < length2)
result = malloc(sizeof(char) * (length1 + 1 + n));
else
result = malloc(sizeof(char) * (length1 + length2 + 1));
if (!result)
return (NULL);
while (i < length1)
result[i] = s1[i];
i++;
while (i < (length1 + n) && n < length2)
result[i++] = s2[j++];

while (i < (length1 + length2) && n >= length2)
result[i] = '\0';

return (result);
}
