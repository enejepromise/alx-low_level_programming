#include <math.h>
#include <stdio.h>

/**
 * jump_search - Implements the Jump search algorithm
 * @array: Pointer to the first element of the array to be searched
 * @size: Number of elements in the array
 * @value: Value to be found
 *
 * Return: The index of the value if found, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t block_size, low, high;

	if (array == NULL)
		return (-1);

	block_size = (size_t) sqrt(size);
	low = 0;
	high = block_size;

	while (low < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

		if (high >= size ||
			(value >= array[low] &&
			 value <= array[min(high, size - 1)]))
		{
			size_t j;

			printf("Value found between indexes [%ld] and [%ld]\n", low, high);

			for (j = low; j <= min(high, size - 1); j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}

		low = high;
		high += block_size;
	}

	return (-1);
}
