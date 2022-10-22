#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str);
{
	/* node at beginning */
	list_t *n;
	size_t nChar;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (nChar = 0; str[nChar]; nChar++)
		;

	n->len = nChar;
	n->next = *head;
	*head = new;

	return (*head);
}
