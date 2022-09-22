#include "main.h"

/**
 * string_toupper - Changes all lower to uppercase
 * @str: The string to be changes
 *
 * Return: A pointer to the changed string
 */
char *string_toupper(char *str)
{
	/* lower to uppercase */
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
