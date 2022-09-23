#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	/* concat two strings */
	int i = 0, d = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (d >= 0)
	{
		*(dest + i) = *(src + d);
		if (*(src + d) == '\0')
			break;
		i++;
		d++;
	}
	return (dest);
}
