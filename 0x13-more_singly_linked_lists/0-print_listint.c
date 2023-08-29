#include "lists.h"

/**
 * pint_list - prinsts all elements
 * @h:linked list of type listint_t to print
 *
 * Number of Nodes
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;
const listint_t *node = h;

while (node != NULL)
{
printf("%d ", node->n);
c++;
node = node->next;
}

printf("\n");
return (c);
}
