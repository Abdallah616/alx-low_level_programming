#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 *			 beginning of a listint_t list.
 *
 * @head: address of pointer to head node.
 * @n: int field of node.
 *
 * Return: address of new element or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t));

	if (!head || !newhead)
		return (NULL);

	newhead->next = NULL;
	newhead->n = n;
	if (*head)
		newhead->next = *head;
	*head = newhead;
	return (newhead);
}
