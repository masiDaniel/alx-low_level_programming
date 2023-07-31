#include "lists.h"

/**
 * print_listint - print out all the elements in the list
 * @h: the list to be used
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numbers;

	numbers = 0;
	while (h)
	{
		printf("%d\n", h->n);
		numbers++;
		h = h->next;
	}

	return (numbers);
}
