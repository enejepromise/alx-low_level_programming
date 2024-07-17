#include <stdio.h>
/**
 * binary_search - function that searches for
 * a value in a sorted array of integers
 *
 * @array:  is a pointer to the first element of the array to search in
 *
 * @size: is the number of elements in array
 *
 * @value: is the value to search for
 * Return: If value is not present return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		size_t i;

		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);

			if (i != right)
				printf(", ");
		}
		putchar('\n');

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}
