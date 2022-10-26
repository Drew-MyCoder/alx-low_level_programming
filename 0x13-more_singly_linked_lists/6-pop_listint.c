#include "lists.h"

/**
 * pop_listint - deletes the head of a node in linked list
 * @head: head of a list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head);
{
	/*del head */
	int h_node;
	listint_t *h;
	listint_t *current;

	if (*head = NULL)
		return (0);

	current = *head;

	h_node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (h_node);
}
