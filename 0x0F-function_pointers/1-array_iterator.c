#include"function_pointers.h"
#include<stdio.h>

/**
 * array_iterator - prints out array elements
 * @array: the test array
 * @size: the number of elements to print
 * @action: pointer
 * Return: is void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;
if (action == NULL || array == NULL)
{
return;
}

for (; x < size ; x++)
{
	action(array[x]);
}
}
