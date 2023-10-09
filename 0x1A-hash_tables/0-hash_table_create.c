#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
* hash_table_create -create a new hashtabe
*@size: size of the array
*Return: (0) pointer to hashtable, (!) return NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int x = 0;
hash_table_t *n_table = NULL;


n_table = malloc(sizeof(hash_table_t));

if (!n_table || size == 0)
	return (NULL);

n_table->size = size;
n_table->array = malloc(sizeof(hash_node_t *) * size);

if (!n_table->array)
{
	free(n_table);
	return (NULL);
}


for (x = 0; x < size; x++)
{
	n_table->array[x] = NULL;
}

return (n_table);
}
