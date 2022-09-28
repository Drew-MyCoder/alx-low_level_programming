#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: teh second string
 * Return: a pointer to the byte in s that matches one of 
 * bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	/*searches for byte's string */
	unsigned int c, d;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		for (d = 0; *(accept + d) != '\0'; d++)
		{
			if (*(s + c) == *(accept + d))
				return (s + c);
		}
	}
	return ('\0');
}
