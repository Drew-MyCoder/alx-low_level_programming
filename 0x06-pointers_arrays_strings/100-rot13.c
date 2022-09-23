#include "main.h"

/**
 * rot13 - encodes s string using rot13
 * @s: input string
 * Return: the pointer to dest
 */

char *rot13(char *s)
{
	/* use rot 13 */
	int cont = 0, j;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklnNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + count) == alph[j])
			{
				*(s + count) = rot13[j];
				break;
			}
		}
		count++;
	}

	return (s);
}

