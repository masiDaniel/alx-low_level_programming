#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node - new node at the begining of the list
 *@head: pointer to list_t
 *@str: new string
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *newstring;

	while (str[length])
		length++;

	newstring = malloc(sizeof(list_t));

	if (!newstring)
		return (NULL);

	newstring->str = strdup(str);
	newstring->len = length;
	newstring->next = (*head);
	(*head) = newstring;

	return (*head);
}
