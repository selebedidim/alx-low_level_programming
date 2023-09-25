#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data in a linked list
 * @head:first node in the linked list
 *
 * Return:resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
