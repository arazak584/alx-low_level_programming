#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL || index >= listint_len(*head))
{
return (-1);
}

if (index == 0)
{
listint_t *node = *head;
*head = node->next;
free(node);
return (1);
}

listint_t *current = *head;
for (unsigned int i = 0; i < index - 1; i++)
{
current = current->next;
}

listint_t *node_to_delete = current->next;
current->next = node_to_delete->next;
free(node_to_delete);

return (1);
}
