#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Succces)
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char d)
{
	return (write(1, &d, 1));
}
