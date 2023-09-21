#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head:pointer to a pointer to the head of the list
 * @str:string to be duplicated and added as the content of new code
 *
 * Return:the address of new element(new_node)
 *        if fails return  null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;
	int len;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	dup = strdup(str);

	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
