#include "lists.h"

/**
 * get_dnodeint_at_index - return a node at a given index
 * @head: pointer to the head of the list
 * @index: the index to be manipulated
 * Return: pointer to the node that is at the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *pointer;
	unsigned int num = 0;

	if (!head)
		return (NULL);
	pointer = head;
	do {
		if (num == index)
			return (pointer);
		num++;
		pointer = pointer->next;
	} while (pointer);
	return (NULL);
}
