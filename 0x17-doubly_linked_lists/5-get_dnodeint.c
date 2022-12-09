#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of s dlistint_t linked list
 * 
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	/* return nth node */
	unsigned int u;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	u = 0;

	while (head != NULL)
	{
		if (u == index)
			break;
		head = head->next;
		u++;
	}

	return (head);
}
