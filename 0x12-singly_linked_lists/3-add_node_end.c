#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list
 * #head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str);
{
	/* node at end */
	list_t *n, *temp;
	size_t nChar;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (nChar = 0; str[nChar]; nChar++)
		;

	n->len = nChar;
	n->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = n;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
