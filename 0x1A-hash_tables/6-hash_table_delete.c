#include "hash_tables.h"

/**
*hash_table_delete - delete a table
*@ht: the table to be deleted
*Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temporary, *next;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		temporary = ht->array[x];
		while (temporary)
		{
			next = temporary->next;
			free(temporary->key);
			free(temporary->value);
			free(temporary);
			temporary = next;
		}
	}
	free(ht->array);
	free(ht);
}
