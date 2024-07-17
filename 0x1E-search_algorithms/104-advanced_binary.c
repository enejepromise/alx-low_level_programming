#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary - Implements a binary search algorithm
 * which returns the target's first occurence using recursion
 *
 * @array: Pointer to the first element in the array
 * @size: Number of elements in the array
 * @value: Value to be found
 *
 * Return: The index of the value if found, otherwise -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size <= 0)
		return (-1);

	return (recurse_binary(array, 0, size - 1, value));
}

/**
 * recurse_binary - Actual recursive binary search
 *
 * @array: Pointer to the first element in the array
 * @left: Lower boundary of the array
 * @right: Higher boundary of the array
 * @value: Value to be found
 *
 * Return: The index of the value if found, otherwise -1
 */

int recurse_binary(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if ((ssize_t) left > (ssize_t) right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; ++i)
	{
		printf("%d", array[i]);

		if (i != right)
			printf(", ");
	}
	putchar('\n');

	mid = left + (right - left) / 2;

	if (left == right)
		return ((array[left] == value) ? (int) left : -1);

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);

	if (array[mid] < value)
		return (recurse_binary(array, mid + 1, right, value));

	return (recurse_binary(array, left, mid, value));
}
