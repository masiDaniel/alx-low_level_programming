#include "main.h"

/**
 * clear_bit - sets te bit value to 0
 * @n: pointer to no
 * @index: index of the bit to change
 * Return: 1(succes), -1(fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
