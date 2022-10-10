#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer of n array of char
 */

char *argstostr(int ac, char **av)
{
	/* add argument */
	char *aout;
	int c, d, e, ia;

	if (ac == 0)
		return (NULL);

	for (c = d = 0; d < ac; c++)
	{
		if (av[d] == NULL)
			return (NULL);

		for (e = 0; av[d][e] != '\0'; e++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (d = e = ia = 0; ia < c; d++, ia)
	{
		if (av[d][e] == '\0')
		{
			aout[ia] = '\n';
			d++;
			ia++;
			e = 0;
		}
		if (ia < c -1)
			aout[ia] = av[d][e];
	}
	aout[ia] = '\0';

	return (aout);
}


