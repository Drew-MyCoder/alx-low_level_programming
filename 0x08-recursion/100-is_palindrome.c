#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	/* length of string */
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * @s: string
 * @d2: biggest iterator
 */
int comparator(char *s, int d1, int d2)
{
	/* compare string */
	if (*(s + d1) == *(s + d2))
	{
		if (d1 == d2 || d1 == d2 + 1)
			return (1);
		return (0 + comparator(s, d1 + 1, d2 - 1));
	}
	return (0);
}

/**is_palindrome - detects if a string is a palindrome
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	/* is palindrome */
	if (* == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
