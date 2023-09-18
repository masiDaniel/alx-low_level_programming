#include "lists.h"

/**
 * free_dlistint - frees a  doubly linked list
 * @head: pointer to the head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	if (!head)
		return;
	while (head)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}
}