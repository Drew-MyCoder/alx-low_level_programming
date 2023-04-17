#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: is the pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int u = 0, begin = 0, fini = (int)size - 1, mid = 0;

	if (!array)
		return (-1);
	while (fini >= begin)
	{
		printf("Searching in array: ");
		for (u = begin; u <= fini; u++)
		{
			printf("%u", array[u]);
			if (u != fini)
				printf(", ");
			else
				printf("\n");
		}
		mid = (begin + fini) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			fini = mid - 1;
		else
			begin = mid + 1;
	}
	return (-1);
}
