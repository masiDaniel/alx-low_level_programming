#include "lists.h"

/**
 * insert_nodeint_at_index - new node to the list at specific index
 * @head: pointer to first node in list
 * @idx: the specific index
 * @n: data to be inserted in the new node
 * Return: pointer to new node, NULL if not succesful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temporary;
	unsigned int x;

	x = 0;
	temporary = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (; temporary && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newnode->next = temporary->next;
			temporary->next = newnode;
			return (newnode);
		}
		else
		{
			temporary = temporary->next;
		}

	}
		return (NULL);
}
