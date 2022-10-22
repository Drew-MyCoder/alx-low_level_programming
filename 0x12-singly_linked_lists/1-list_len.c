#include "lists.h"
/**
 * list_len - returns the number of elements in a list
 * @h: singly linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h);
{
	/* num of elem */
	size_t nElem;

	nElem = 0;
	while (h != NULL)
	{
		h = h->next;
		nElem++;
	}
	return (nElem);
}
