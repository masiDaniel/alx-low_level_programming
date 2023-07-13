#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: no of bytes to be allocated
 * Return: 98 when it fails and a pointer when it passes
 */

void *malloc_checked(unsigned int b)
{
void *pointer;
pointer = malloc(b);
if (pointer == NULL)
exit(98);
return (pointer);
}
