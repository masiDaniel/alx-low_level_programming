#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of the array
 * @c: char
 * Return: NULL if array not created, pointer to it if created
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *tab;

tab = malloc(sizeof(char) * size);
if (tab == NULL || size == 0)
{
return (NULL);
}

for (; i < size; i++)
{
tab[i] = c;
}

return (tab);
}
