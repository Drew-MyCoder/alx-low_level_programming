#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	/* to print an integer */
	unsigned int c, d, e;

	if (n < 0)
	{
		_putchar(45);
		c = n * -1;
	}
	else
	{
		c = n;
	}

	d = c;
	e = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; e >= 1; e /= 10)
	{
		_putchar(((c / e) % 10) + 48);
	}
}
