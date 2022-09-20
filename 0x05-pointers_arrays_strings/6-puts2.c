#include "main.h"

/**
 * puts2 - Prints one char of two strings
 * @str: The string containing char
 */
void puts2(char *str)
{
	/* code to print every other char of a string where c is index and d is length*/
	int c = 0, d = 0;

	while (str[c++])
		d++;

	for (c = 0; c < d; c += 2)
		_putchar(str[c]);

	_putchar('\n');
}


