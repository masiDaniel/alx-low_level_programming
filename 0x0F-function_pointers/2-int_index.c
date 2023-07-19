#include "function_pointers.h"

/**
 * int_index - check the numbers
 * @array: the array to be checked from
 * @size: size of the elements in the array
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;
if (cmp == NULL || array == NULL || size <= 0)
	return (-1);

for (; x < size; x++)
{
	if (cmp(array[x]))
	{
		return (x);
	}

}
return (-1);
}
