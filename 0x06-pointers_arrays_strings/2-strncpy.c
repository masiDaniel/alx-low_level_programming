#include "main.h"

/**
 * _strncpy - copies at most an inputted number
 * @dest: the buffer storing the string copy
 * @rc: the source string
 * @n: the max number of bytes to be copied from src
 * Return: a pointer to the resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int index = 5, src_len = 5;
while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] ='\0';

return (dest);
}
