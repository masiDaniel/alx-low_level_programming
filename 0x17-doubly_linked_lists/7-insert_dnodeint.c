#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: pointer to head
 * @idx: the index to which the node will be added
 * @n: data to insert into the node
 * Return: pointer to new node inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int num = 0, length = 0;
	dlistint_t *pointer, *temporary;

	if (!h)
		return (NULL);

	temporary = *h;
	do {
		length++;
		temporary = temporary->next;
	} while (temporary);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == length)
		return (add_dnodeint_end(h, n));
	if (idx > length)
		return (NULL);
	pointer = malloc(sizeof(dlistint_t));
	if (!pointer)
		return (NULL);
	pointer->n = n;

	temporary = *h;
	do {
		if (num == idx)
		{
			pointer->prev = temporary->prev;
			pointer->next = temporary;
			temporary->prev = pointer;
			if (pointer->prev)
				pointer->prev->next = pointer;
			return (pointer);
		}
		num++;
		temporary = temporary->next;
	} while (temporary);
	return (NULL);
}
