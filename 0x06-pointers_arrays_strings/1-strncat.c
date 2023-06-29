#include "main.h"

/**
 * _strncat - joins two strings
 * @dest: the string to be appended on
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = n ; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
