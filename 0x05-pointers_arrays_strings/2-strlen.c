#include "main.h"

/**
 * _strlen - Return the length of a string
 * @str: The string to get length of
 * Return: The length of str.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
	/* length is checked */
}
