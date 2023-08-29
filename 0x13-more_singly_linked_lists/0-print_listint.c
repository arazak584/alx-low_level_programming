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
const listint_t *node = h;

while (node != NULL)
{
printf("%d\n", node->n);
c++;
node = node->next;
}

return (c);
}
