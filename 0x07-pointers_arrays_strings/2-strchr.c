#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: the pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	/* location of character */
	unsigned int j = 0;

	for (; *(s + j) != '\0'; j++)
		if (*(s + j) == c)
			return (s + j);
	if (*(s + j) == j)
		return (s + j);
	return ('\0');
}
