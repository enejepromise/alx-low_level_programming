#include <stdio.h>
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: if array is NULL, your function must return -1.
 */
int linear_search(int *array, size_t size, int value);
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("compared value of array[%ld] = [%d\n]", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
