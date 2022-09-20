#include "main.h"

/**
 * _strcpy - Copies string pointed to @src, including the null bte
 * @dest: A buffer to copy string to
 * @src: Source string to copy
 * Return: A pointer to the destination string @dest
 */
char *_strcpy(char *dest, const char *src)
{
	/* copies string to new pointer */
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

