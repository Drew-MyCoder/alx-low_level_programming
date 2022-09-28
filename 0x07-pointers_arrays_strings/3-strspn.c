#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: initial segment
 * @accept: accepted bytess
 * Return: the number of the accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	/* length of prefix substring */
	unsigned int c, d, bool;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		bool = 1;
		for (d = 0; *(accept + d) != '\0'; d++)
		{
			if (*(s + c) == *(accept + d))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (c);
}
