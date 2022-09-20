#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an imputed num of elem
 * @a: The array of integer
 * @n: The num of elem to be printed
 */
void print_array(int *a, int n)
{
	/*prints array of numbers */
	int ind;

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", a[ind]);

		if (ind == n -1)
			continue;

		printf(", ");
	}

	printf("\n");
}
