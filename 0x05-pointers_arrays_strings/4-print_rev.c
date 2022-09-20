#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string that is printed
 */
void print_rev(char *s)
{
	int len = 0, ind;

	while (s[ind++])
		len++;

	for (ind = len - 1; ind >= 0; ind--)
		_putchar(s[ind]);

	_putchar('\n');
	/* prints the reverse of string */
}
