#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to be filled
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	/* copy memory area */
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) = *(src + j);

	return (dest);
}
