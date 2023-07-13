#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * *_calloc - allocate memory for an array
 * @nmemb: no of elements in the array
 * @size: of each of the elements in th earray
 *Return: pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;

if (size == 0 || nmemb == 0)
return (NULL);

pointer = malloc(size * nmemb);

if (pointer == NULL)
return (NULL);

_memset(pointer, 0, nmemb * size);

return (pointer);
}


/**
 * *_memset - fill memory
 * @s: area in memory to be filled
 * @b: the character to be copied
 * @n: no of times to copy b
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
x = 0;
for (; x < n; x++)
s[x] = b;
return (s);
}
