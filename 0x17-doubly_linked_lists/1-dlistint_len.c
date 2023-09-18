#include "lists.h"

/**
 * dlistint_len - return no of elements in  list
 * @h: pointer to top
 * Return: no of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *top = malloc(sizeof(dlistint_t));
	
    if (!h || !top)
		return (0);
    top = h;
	while (top)
	{
		num++;
	    top =top->next;
	}
	free((void *) top);
	return (num);
}