#include "hash_tables.h"

/**
* hash_table_get - gets a value from a key
* @ht: table
* @key: key
* Return: value if present, NULL if not
*/


char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *temporary = NULL;
unsigned long int index;

if (!key || !ht)
	return (NULL);

index = key_index((const unsigned char *)key, ht->size);
temporary = ht->array[index];

while (temporary)
{
if (strcmp(temporary->key, key) == 0)
	return (temporary->value);

temporary = temporary->next;
}

return (NULL);
}
