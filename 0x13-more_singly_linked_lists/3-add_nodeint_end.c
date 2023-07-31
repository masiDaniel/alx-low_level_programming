#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a list
 * @head: pointer to first element
 * @n: ata to be inputed in the newly created node
 * Return: pointer to new node , NULL if not present
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temporary;

	temporary = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temporary->next)
	{
		temporary = temporary->next;
	}

	temporary->next = newnode;

	return (newnode);
}
