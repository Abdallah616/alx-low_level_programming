#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at
 *			 the end of a listint_t list.
 *
 * @head: address of pointer to head node.
 * @n: int field of node.
 *
 * Return:  address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t));
	listint_t *tnode;

	if (!head || !newhead)
		return (NULL);
	newhead->next = NULL;
	newhead->n = n;
	if (!*head)
		*head = newhead;
	else
	{
		tnode = *head;
		while (tnode->next)
			tnode = tnode->next;
		tnode->next = newhead;
	}
	return (newhead);
}
