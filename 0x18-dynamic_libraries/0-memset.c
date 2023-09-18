#include "main.h"

/**
 * _memset - fills memory area with the cinstant byte b
 * @s: points to memory area
 * @b: the desired value
 * @n: the number of btyes to be changed
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
