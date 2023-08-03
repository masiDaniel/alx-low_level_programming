#include "main.h"

/**
 * binary_to_unit - convert binary no to unsigned int
 * @b: string containing binary no
 * Return: unsigned int no
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int no = 0;
	int x = 0;

	if (!b)
		return (0);

	for (; b[x]; x++)
	{
		if (b[x] > '1' || b[x] < '0')
			return (0);

		no = 2 * no + (b[x] - '0');
	}

	return (no);
}
