#include "search_algos.h"

/**
 * interpolation_search - Implementation of Interpolation search algorithm
 * @array: Pointer to the first element in the array to be searched
 * @size: Number of elements in the array
 * @value: Value to be found
 *
 * Return: The index of the value if found, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low])
	{
		size_t pos;

		if (array[low] == array[high])
			return (array[low] == value ? low : (size_t) -1);

		pos = low + (
			((double)(high - low) /
			(array[high] - array[low])) *
			(value - array[low])
		);


		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		else if (array[pos] > value)
			high = pos - 1;

		else
			low = pos + 1;
	}

	return (-1);
}
