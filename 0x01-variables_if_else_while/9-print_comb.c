#include <stdio.h>
/**
 * main - Prints numbers between 0 - 9 with comma and spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
		if (k != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
