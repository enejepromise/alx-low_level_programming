#include "math.h"
#include "search_algos.h"

/**
 * jump_list - Implementation of jump search algorithm
 * on a singly linked list
 *
 * @list: Pointer to the first node of the list
 * @size: Number of nodes in the list
 * @value: Value to be found
 *
 * Return: Pointer to the first occurence of value, otherwise NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, step;
	listint_t *cur = NULL, *prev = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	step = (size_t) sqrt(size);
	prev = cur = list;

	while (cur->next && cur->n < value)
	{
		prev = cur;

		for (i = 0; cur->next && i < step; ++i)
			cur = cur->next;
		printf("Value checked at index [%ld] = [%d]\n", cur->index, cur->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		prev->index, cur->index);

	while (prev && prev->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
