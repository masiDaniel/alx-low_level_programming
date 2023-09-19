#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of the list
 * @head: pointer to head
 * @n: data to add to the list
 * Return: (address of new element) or (null)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *pointer;

	if (!head)
		return (NULL);
	pointer = malloc(sizeof(dlistint_t));

	if (!pointer)
	{
		return (NULL);
	}
	pointer->n = n;
	pointer->next = NULL;
	pointer->prev = NULL;

	if (*head)
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = pointer;
		pointer->prev = temp;
	}
	else
	{
		*head = pointer;
	}
	return (pointer);
}
