#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *current = head;
listint_t *next_node = NULL;

/*
*Iterate through the list, freeing each node
*/
while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
}
