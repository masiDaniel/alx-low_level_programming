#include "lists.h"
#include <stdio.h>

/**
 * print_lit - print out all the elements
 * @h: a pointer to the list to be printed
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;
	while (h)
	{
	if (!h->str)
	{
		printf("[0] (nill)\n");
	}
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	size++;
	}
	return (size);
}
