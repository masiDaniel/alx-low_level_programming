#include "hash_tables.h"

/**
* key_index - function to return the index of a key
* @key: key to be used
* @size: the size of the array
* Return: index of the storage location
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
