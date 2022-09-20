#include "main.h"
/**
 * _puts _ Prints a string to a stdout
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
	/* inserts string on a new line */
}

