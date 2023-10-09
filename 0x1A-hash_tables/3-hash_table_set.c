#include "hash_tables.h"

/**
* hash_table_set - add element to the table
* @ht: the table
* @key: key to be added
* @value: value that will be added
* Return: (0) on failure, (1) on success
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new = NULL;
	unsigned long int index;

	if ( *key == '\0' || !value || !ht)
		return (0)

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));

	if(!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
