#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array
 * @min: the min range of values
 * @max: the max range of values
 * Return: pointer to the array created
 */

int *array_range(int min, int max)
{
int *newarray, x, size;

if (min > max)
return (NULL);

size = max - min + 1;
newarray = malloc(sizeof(int) * size);

if (newarray == NULL)
return (NULL);

for (x = 0; min <= max; x++)
newarray[x] = min++;

return (newarray);
}
