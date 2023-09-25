#include "lists.h"

/**
 * pop_listint - Delete the head of the node of a linked list
 * @head:POinter to the first element in the linked list
 *
 * Return:The data inside the elements that was deleted or NULL if is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	tmp = (*head)->next;
	*head = tmp;

	return (a);
}
