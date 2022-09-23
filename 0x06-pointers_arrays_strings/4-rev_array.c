#include "main.h"

/**
 * reverse_array - revereses content of array
 * @a: array
 * @n: number of elements of array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	/* reverse */
	int e, f, tmp;

	for (e = 0; e < n - 1; e++)
	{
		for (f = e + 1; f > 0; f--)
		{
			tmp = *(a + f);
			*(a +f) = *(a + (f - 1));
			*(a + (f - 1)) = tmp;
		}
	}
}

