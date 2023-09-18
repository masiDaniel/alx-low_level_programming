#include "lists.h"

/**
 * sum_dlistint - return sum of everything in the list
 * @head: pointer to the head of the list 
 * Return: the sum of everything
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *pointer;

	if (!head)
		return (0);
	pointer = head;
    do
	{
		sum += pointer->n;
		pointer = pointer->next;
	} while (pointer);
	return (sum);
}