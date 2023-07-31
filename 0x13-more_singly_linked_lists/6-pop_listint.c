#include "lists.h"

/**
 * pop_listint - delete head node in list
 * @head: pointer to first element in the list
 * Return: data that was deleted, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int numbers;

	if (!*head || !head)
		return (0);

	numbers = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (numbers);
}
