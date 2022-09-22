#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with the byte position
 * @b: The buffer to be printed
 * @size: The number of bytes to be printed from the buffer
 */
void print_buffer(char *b, int size)
{
	/* printable character */
	int by, index;

	for (by = 0; by < size; by += 10)
	{
		printf("%08x: ", by);

		for (index = 0; index < 10; index++)
		{
			if ((index + by) >= size)
				printf(" ");

			else
				printf("%02x", *(by + index + by));

			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}

		for (index = 0; index < 10; index++)
		{
			if ((index + by) >= size)
				break;

			else if (*(b + index + by) >= 31 &&
					*(b + index + by) <= 126)
				printf("%c", *(b + index + by));

			else
				printf(".");
		}

		if (by >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
