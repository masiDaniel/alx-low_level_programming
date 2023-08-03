#include "main.h"

/**
 * set_bit - set a bit to 1
 * @n: pointer to no to be changed
 * @index: index of the bit
 * Return: 1 (success), 0 (fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
