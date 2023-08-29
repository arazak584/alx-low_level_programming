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
listint_t *current = malloc(sizeof(listint_t));
if (current == NULL)
{
return (NULL);
}

current->n = n;
current->next = NULL;

/*
 *  If the list is empty, make the new node the head
 */
if (*head == NULL)
{
*head = current;
return (current);
}

/*
 * Otherwise, find the last node in the list
 */
listint_t *last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

/*
 * Set the next pointer of the last node to the new node
 */
last_node->next = current;

return (current);
}
