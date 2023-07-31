#include "lists.h"

/**
 * sum_listint - sum of everything in the list
 * @head: first node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}

	return (sum);
}
