#include "main.h"

/**
 * puts_half - Prints half of string
 * @str: The string that is printed
 */
void puts_half(char *str)
{
	/* prints half of string */
	int c = 0, d = 0, n;

	while (str[c++])
		d++;

	if ((d % 2) == 0)
		n = d / 2;

	else
		n = (d + 1) / 2;

	for (c = n; c < d; c++)
		_putchar(str[c]);

	_putchar('\n');
}
