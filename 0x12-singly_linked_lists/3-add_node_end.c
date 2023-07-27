#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node at the end of the list
 * @head: pointer to list_t
 * @str: the string to be put in the new node
 * Return: address of the new element else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *tempo = *head;
	list_t *newstring;

	while (str[length])
	{
		length++;
	}
	newstring = malloc(sizeof(list_t));

	if (!newstring)
	{
	return (NULL);
	}

	newstring->str = strdup(str);
	newstring->len = length;
	newstring->next = NULL;

	if (*head == NULL)
	{
		*head = newstring;
		return (newstring);
	}

	while (tempo->next)
		tempo = tempo->next;
	tempo->next = newstring;
	return (newstring);
}
