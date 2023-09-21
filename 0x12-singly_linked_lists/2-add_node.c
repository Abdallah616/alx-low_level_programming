#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: address of pointer to head node.
 * @str: string field of node.
 *
 * Return: address of the new element.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));

	if (!head || !newhead)
		return (NULL);
	if (str)
	{
		newhead->str = strdup(str);
		if (!newhead->str)
		{
			free(newhead);
			return (NULL);
		}
		newhead->len = _strlen(newhead->str);
	}
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
