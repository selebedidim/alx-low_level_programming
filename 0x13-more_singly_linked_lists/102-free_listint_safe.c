#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h:Pointer to the first in the linked list
 *
 * Return:Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int safe;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		safe = *h - (*h)->next;
		if (safe > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
	}
	else
	{
		free(*h);
		*h = NULL;
		len++;
		break;
	}

	}
	*h = NULL;

	return (len);

}

