#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to the memory to be relocated
 * @old_size: size of the memory
 * @new_size: size of the new memory block
 * Return: pointer to new mwmory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int x;
char *newblock;
char *oldblock;

if (new_size == old_size)
return (ptr);

if (ptr && new_size == 0)
free(ptr);
return (NULL);

if (!ptr)
return (malloc(new_size));

newblock = malloc(new_size);

if (!newblock)
return (NULL);

oldblock = ptr;
if (new_size < old_size)
{
for (x = 0; x < new_size; x++)
newblock[x] = oldblock[x];
}

if (new_size > old_size)
{
for (x = 0; x < old_size; x++)
newblock[x] = oldblock[x];
}

free(ptr);
return (newblock);
}
