#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded
 *
 * Return: A posinter to the encoded string
 */
char *leet(char *s)
{
	/* to encode string */
	int i = 0, j;
	int low_let[] = {97, 101, 111, 116, 108};
	int up_let[] = {65, 69, 70, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};
	
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i == low_let[j] || *(s + i) == up_let[j])
					{
						*(s + i) = nums[j];
						break;
					}
		}
		i++;
	}

	return (s);
}
