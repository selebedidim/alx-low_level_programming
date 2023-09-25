#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked lists
 * @h:Linked list type listint_t to traverse
 *
 * Return:Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
