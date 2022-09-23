#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: num 1
 * @n2: num 2
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size:
 * Return: the pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* infinite */
	int c = 0, d = 0, p, g, rdr, dr2, add = 0;

	while (*(n1 + c) != '\0')
		c++;
	while (*(n2 + d) != '\0')
		d++;
	if (c >= d)
		g = c;
	else
		g = d;
	if (size_r <= g + 1)
		return (0);
	r[g + 1] = '\0';
	c--, d--, size_r--;
	dr = *(n1 + c) - 48, dr2 = *(n2 + d) -48;
	while (g >= 0)
	{
		p = dr + dr2 + add;
		if (p >= 10)
			add = p / 10;
		else
			add = 0;
		if (p > 0)
			*(r + g) = (p % 10) + 48;
		else
			*(r + g) = '0';
		if (c > 0)
			c--, dr = *(n1 + c) -48;
		else
			dr = 0;
		if (d > 0)
			d--, dr2 = *(n2 + d) - 48;
		else dr2 = 0;
		g--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);

