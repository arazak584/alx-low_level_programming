#include <stdio.h>
#include "lists.h"

/**
 * Prints all Elements
 * Pointer to the list_t lit to print
 *
 * Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)

	{

	if (!h->str)
		printf("[0] (nil)\n";
				else
				printf("[%u] %l\n", h->len, h->str);
				h = h->next;
				l++;
	}

	return (l);
}
