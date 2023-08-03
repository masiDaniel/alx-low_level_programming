#include "main.h"

/**
 * get_endianness - check machine
 * Return: 1 (little), 0 (big)
 */


int get_endianness(void)
{
	unsigned int x = 1;
	char *check = (char *) &x;

	return (*check);
}
