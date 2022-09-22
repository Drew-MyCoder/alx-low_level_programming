#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	/* reverse of array */
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n-1 - index];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
