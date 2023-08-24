#include <stdio.h>
#include "lists.h"

/**
 *print_list - Prints all the elements of a link list
 * @h: pointer to the list_t lit to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{i
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
