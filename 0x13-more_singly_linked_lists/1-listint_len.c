#include "lists.h"

/**
 * listint_len - returns the number of elemets in a linked list
 * @h: head of a list
 *
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h);
{
	/* number of elements */
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
