#include "lists.h"

/**
 * dlistint_len - finds the list lenght of a linked dlistint_t list
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		++i;
		h = h->next;
	}

	return (i);
}
