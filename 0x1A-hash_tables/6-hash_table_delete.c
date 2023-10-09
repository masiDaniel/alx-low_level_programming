#include "hash_tales.h"

/**
*hash_table_delete - delete a table
*@ht: the table to be deleted
*Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temorary, *next;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		temporary = ht->array[x];
		while (temporary)
		{
			next = temporary->next;
			free(temporary->key);
			free(temporary->vlue);
			free(temporary);
			temporary = next;
		}
	}
	free(ht->array);
	free(ht);
}
