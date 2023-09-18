#include "lists.h"

/**
 * print_dlistint - print elements in the Dlidt
 * @h: pointer to head
 * Return: no of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *top;
    size_t count = 0;

    if (!h)
        return(0);
    
    top = h;
    while (top)
    {
        printf("%d\n", top->n);
        count++;
        top = top->next;
    }
    return (count);
}
