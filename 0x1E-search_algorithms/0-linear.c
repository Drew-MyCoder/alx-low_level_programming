#include "search_algos.h"

/**
 * linear_search - function that search for the value in an array of integers
 * using the linear search algorithm
 * @array: is the pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	int u = 0;

	if (!array)
		return (-1):
	for (u = 0; u < (int)size; u++, array++)
	{
		printf("value checked array[%u] = [%u]\n", u, *array);
		if (*array == value)
			return (u);
	}
	return (-1);
}
