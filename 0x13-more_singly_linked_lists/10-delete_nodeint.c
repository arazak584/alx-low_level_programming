#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index) {
  listint_t *current;
  listint_t *previous;
  unsigned int i;

  if (head == NULL || *head == NULL) {
    return (-1);
  }

  if (index == 0) {
    *head = (*head)->next;
    free((void*)*head);
    return (1);
  }

  current = *head;
  for (i = 0; current != NULL && i < index - 1; i++) {
    previous = current;
    current = current->next;
  }

  if (current == NULL) {
    return (-1);
  }

  previous->next = current->next;
  free(current);

  return (1);
}

