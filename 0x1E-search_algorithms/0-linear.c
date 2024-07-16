#include <stdio.h>

/**
 * linear_search - function that implements the Linear search algorithm
 *
 * @array: Pointer to the first element of the array to be searched
 * @size: Number of elements in the array
 * @value: Value to be found
 *
 * Return: the index of value, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
