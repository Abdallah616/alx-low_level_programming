#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: address of pointer to first node.
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *tnode;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		tnode = node;
		node = node->next
		free(tnode);
	}
	*head = NULL;
}
