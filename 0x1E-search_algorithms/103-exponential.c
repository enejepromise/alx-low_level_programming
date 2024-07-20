#include <stdio.h>

/**
 * exponential_search - Implementation of the Exponential search algorithm
 * @array: Pointer to the first element in the array to be searched
 * @size: Number of elements in the array
 * @value: Value to be found
 *
 * Return: The index of the value if found, otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, mid, low, high;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	high = min(i, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	while (low <= high)
	{
		size_t j;

		printf("Searching in array: ");
		for (j = low; j <= high; ++j)
		{
			printf("%d", array[j]);
			if (j != high)
				printf(", ");
		}
		putchar('\n');
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
