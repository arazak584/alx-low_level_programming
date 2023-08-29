#include "lists.h"

/**
 * print_listint - prinsts all elements of a linked list
 * @h:linked list of type listint_t to print
 *
 * Return: Number of Nodes
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;

while(h)
{
printf("%d\n", h->n);
c++;
h = h->next;
}

return (c);
}
