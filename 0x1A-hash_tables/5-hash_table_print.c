#include "hash_tables.h"

/**
* hash_table_print - print a hash tavle
* @ht: the tableto be printed
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{

	int test = 0;
	hash_node_t *temporary;
	unsigned long int x;

	if (!ht)
		return;

	printf("{");

	for (x = 0; x < ht->size; x++)
	{
		temporary = ht->array[x];

		while (temporary)
		{
			if (test == 1)
				printf(", ");

			printf("'%s': '%s'", temporary->key, temporary->value);
			temporary = temporary->next;
			test = 1;
		}
	}
	printf("}\n");
}
