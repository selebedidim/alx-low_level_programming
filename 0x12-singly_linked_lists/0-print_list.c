#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h:pointer to the head of the list
 *
 * Return:The number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
