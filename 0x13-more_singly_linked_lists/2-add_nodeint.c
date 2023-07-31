#include "lists.h"

/**
 * add_nodeint - new node at the beginning
 * @head: pointer to first node in the list
 * @n: data to be inserted in the new node
 * Return: NULL if creation fails,pointer to the new node if it works
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
