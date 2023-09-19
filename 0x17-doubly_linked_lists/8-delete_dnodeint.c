#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given index in the list
 * @head: pointer to the head
 * @index: the index of the node to be deleted
 * Return: (1)success, (-1) failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *temporary;

	if (!(*head) || !head)
		return (-1);

	temporary = *head;
	do {
		temporary = temporary->next;
	 	num++;
	} while (temporary && num < index);

	if (!temporary)
		return (-1);

	if (index == 0)
		*head = (*head)->next;
	temporary->prev ? temporary->prev->next = temporary->next : 0;
	temporary->next ? temporary->next->prev = temporary->prev : 0;

	free(temporary);
	return (1);
}
