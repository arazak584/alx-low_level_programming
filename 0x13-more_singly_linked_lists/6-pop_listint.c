#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
if (*head == NULL)
{
return (0);
}

listint_t *node = *head;
*head = node->next;

int test = node->n;
free(node);

return (test);
}
