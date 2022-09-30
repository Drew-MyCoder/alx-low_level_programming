#include "main.h"

/**
 * power_operation - returns the natural square root of a number
 * @n: input number
 * @c: iterator
 * Return: square root or -1
 */
int power_operation(int n, int c)
{
	/* sq rt */
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c +1));
}

/**
 * _sqrt_recursion - returns the natural sq rt of a number
 * @n: input number
 * Return: natural sq rt
 */
int _sqrt_recursion(int n)
{
	/* recursion of sq rt */
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
