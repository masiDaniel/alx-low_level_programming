#include "search_algos.h"

void print_array(int *array, size_t low, size_t high);

/**
 * binary_search - searche for  value in a sorted array
 * @array: pointer first element of  array
 * @size: size of array
 * @value: value to search for
 * Return: index of value
*/

int binary_search(int *array, size_t size, int value)
{
	size_t high, low, mid;

	if (array)
	{;
        low = 0;
		high = size - 1;
		

		while (low <= high)
		{
			printf("Searching in array: ");
			print_array(array, low, high);
			printf("\n");
			mid = low + (high - low) / 2;
			if (array[mid] == value)
			{
				return ((int)mid);
			}
			else if (array[mid] > value)
			{
				high = mid - 1;
			}
			else if (array[mid] < value)
			{
				low = mid + 1;
			}
		}
	}
	return (-1);
}

/**
 * print_array - prints an array
 * @array: the array to print
 * @low: first element
 * @high: last element
 * Return: void
*/
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	for (i = low; i <= high; i++)
	{
		if (i == high)
		{
			printf("%d", array[i]);
		}
		else
		{
			printf("%d, ", array[i]);
		}
	}
}