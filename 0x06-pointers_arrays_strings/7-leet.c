#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */
char *leet(char *s)
{
	/* 1337 */
	int c = 0, j;
	int low_let[] = {97, 101, 111, 116, 108};
	int up_let[]  = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + c) == low_let[j] || *(s + c) == up_let[j])
			{
				*(s + c) = nums[j];
				break;
			}
		}
		c++;
	}

	return (s);
}
