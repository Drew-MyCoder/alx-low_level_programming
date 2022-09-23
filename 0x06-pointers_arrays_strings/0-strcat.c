#include "main.h"

/**
 * strcat - Concat the string pointed to by @src to include the terminating null bytr
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended 
 *
 * Return: A pointer to the destination string @dest
 */
char *strcat(char *dest, char *src)
{
	/* concat two strings */
	int i = 0, length_dest = 0;

	while (dest[i++])
		length_dest++;

	for (i = 0; src[i]; i++)
		dest[length_dest++] = src[i];

	return (dest);
}
