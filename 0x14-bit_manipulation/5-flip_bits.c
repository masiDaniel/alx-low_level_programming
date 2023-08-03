#include "main.h"

/**
 * flip_bits - count no of bits to change
 * @n: first no
 * @m: second no
 * Return: no of its to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;
	unsigned long int current;
	int x;
	unsigned long int different = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = different >> x;
		if (current & 1)
			bits++;
	}
	return (bits);
}
