#include <stdio.h>
#include "lists.h"

/**
 * Function that return the number of nodes
 * Completed by: Abdul Razak
 * 24-08-2023
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

       while (h)
        {
	if (!h->str)
		printf("[0] (nil)\n";
				else
				printf("[%u] %s\n", h->len, h->str);
				h = h->next;
				s++;
	}
	return (s);
}
