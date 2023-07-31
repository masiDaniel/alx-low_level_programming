#include "lists.h"

/**
 * listint_len - no of elements in a list
 * @h: the list to be used
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numbers;

	numbers = 0;
	while (h)
	{
		numbers++;
		h = h->next;
	}
	return (numbers);
}
