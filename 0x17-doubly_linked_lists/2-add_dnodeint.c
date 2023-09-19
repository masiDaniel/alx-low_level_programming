#include "lists.h"

/**
 * add_dnodeint - add a new node at beginning of the list
 * @head: pointer to the head of the list
 * @n: data to add to the new node
 * Return: address of new element or null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *pointer;

	if (!head)
		return (NULL);
	pointer = malloc(sizeof(dlistint_t));
	if (!pointer)
	{
		return (NULL);
	}
	pointer->n = n;
	pointer->prev = NULL;
	pointer->next = NULL;

	if (*head)
	{
		pointer->next = *head;
		(*head)->prev = pointer;
	}

	*head = pointer;
	return (pointer);
}
