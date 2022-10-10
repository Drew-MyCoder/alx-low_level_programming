#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer of an array chars
 */
char *str_concat(char *s1, char *s2)
{
	/* concatenate */
	char *strout;
	unsigned int c, d, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (c = 0; s1[c] != '\0'; i++)
		;

	for (j = 0; s2[d] != '\0'; d++)
		;

	strout = malloc(sizeof(char) * (c + d + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < c; k++)
		strout[k] = s1[k];

	limit = d;
	for (d = 0; d <= limit; k++, d++)
	       strout[k] = s2[d];

	return (strout);
}	
