#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a specific index
 * @head: pointer to first element
 * @index: the specified index to be used
 * Return: 0 when it fails, 1 when it passes
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary;
	listint_t *placeholder;
	unsigned int x;

	temporary = *head;
	placeholder = NULL;
	x = 0;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (x < index - 1)
	{
		if (!(temporary->next) || !temporary)
			return (-1);

		temporary = temporary->next;
		x++;
	}

	placeholder = temporary->next;
	temporary->next = placeholder->next;
	free(placeholder);

	return (1);
}
