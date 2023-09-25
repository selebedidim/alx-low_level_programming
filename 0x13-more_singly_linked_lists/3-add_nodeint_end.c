#include "lists.h"

/**
 * add_nodeint_end - Adds nodes at the end of a linked list
 * @head:Pointer to the first element in the list
 * @n:Data to insert in the new element
 *
 * Return:Pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
