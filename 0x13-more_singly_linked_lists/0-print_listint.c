#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head of a list
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h);
{
	/* elements */
	size_t n_nodes = o;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
