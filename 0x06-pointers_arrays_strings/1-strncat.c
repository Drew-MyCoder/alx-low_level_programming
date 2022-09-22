#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * an input number of byte from src
 * @dest: The string to be appended on
 * @src: The string that dest is appended on
 * @n: The number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	/*concat two strings */
	int i = 0, d_l = 0;

	while (dest[i++])
		d_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[d_l++] = src[i];

	return (dest);
}
