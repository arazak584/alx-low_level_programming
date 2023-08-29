#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current;
listint_t *last_node;

current = malloc(sizeof(listint_t));
if (current == NULL)
{
return (NULL);
}

current->n = n;
current->next = NULL;

if (*head == NULL)
{
*head = current;
return (current);
}

last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

last_node->next = current;

return (current);
}
