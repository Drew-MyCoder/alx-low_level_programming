#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings
 * @n1: THe string containing the first number to be added
 * @n2: The string containing the second number to be added
 * @r: The buffer to store the result
 * @r_index: The current index of the buffer
 *
 * Return: If r can store the sum - a pointer to the result
 * If r cannot store the sum - 0
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	/* add two strings */
	int nums, tmp = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		nums = (*n1 - '0') + (*n2 - '0');
		nums += tmp;
		*(r + r_index) = (nums % 10) + '0';
		tmp = nums / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		nums = (*n1 - '0') + tmp;
		*(r + r_index) = (nums % 10) + '0';
		tmp = nums / 10;
	}

	if (tmp && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tmp && r_index < 0)
		return (0);

	return (r + r_index + 1);
}

/**
 * Infinite_add - Adds two numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: If r can store the sum - pointer to the result
 * If r cannot store the sum - 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* main code */
	int i, len = 0, len2 = 0;

	for (i = 0; *(n1 + i); i++)
		len++;

	for (i = 0; *(n2 + i); i++)
		len2++;

	if (size_r <= len + 1 || size_r <= len2 +1)
		return (0);

	n1 += len - 1;
	n2 += len2 - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
