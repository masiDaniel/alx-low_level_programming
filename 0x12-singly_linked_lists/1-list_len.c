#include "lists.h"
#include <stdlib.h>

/**
 * list_len - number of element in a linked list
 * @h: pointer to the linked list
 *Return: no of elements
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
