#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
 */
void print_buffer(char *b, int size)
{
	/* buffer */
	int c, d, e;

	if (size <= 0)
		printf("\n");
	elese
	{
		for (c = 0; c < size; c += 10)
		{
			printf("%.8x:", j);
			for (d = c; d < c + 10; d++)
			{
				if (d % 2 == 0)
					printf(" ");
				if (d < size)
					printf("%.2x", *(b + d));
				else
					printf(" ");
			}
			printf(" ");
			for (e = c; e < c + 10; e++)
			{
				if (e >= size)
					break;
				if (*(b + 1) < (32 || *(b + 1) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b +1));
			}
			printf("\n");		
		}
	}
}
