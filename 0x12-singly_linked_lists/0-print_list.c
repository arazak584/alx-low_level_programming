#include <stdio.h>
#include "lists.h"

/**
 * Function that return the number of nodes
 * Completed by: Abdul Razak
 * 24-08-2023
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	if (node == NULL) {
		printf("[0] (nil)\n");
		return 0;
	}

	while (node != NULL ) {
		printf("[%d] %s\n", count++, node->data);
		node = node->next;
	}

	return count;
}
