#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;

if (head == NULL)
{
fprintf(stderr, "Error: Head is NULL\n");
exit(98);
}

while (current != NULL)
{
printf("%d%c", current->n, (current->next != NULL) ? ' ' : '\n');
count++;
current = current->next;
}

return (count);
}
