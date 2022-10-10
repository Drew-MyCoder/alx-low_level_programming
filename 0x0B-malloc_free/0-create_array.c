#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: storage char
 *
 * Return: pointer of the array chars
 */
char *create_array(unsigned int size, char c)
{
	/* array */
	char *cd;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cd = malloc(sizeof(c) *size);

	if (cd == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cd[i] = c;

	return (cd);
}
