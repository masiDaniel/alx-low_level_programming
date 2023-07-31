#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node in the list
 * @index: index of the node to return
 * Return: pointer to the node, NULL if it is not there
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *temporary = head;

	x = 0;

	while (temporary && x < index)
	{
		temporary = temporary->next;
		x++;
	}

	if (temporary)
	{
		return (temporary);
	}
	else
	{
		return (NULL);
	}

}
