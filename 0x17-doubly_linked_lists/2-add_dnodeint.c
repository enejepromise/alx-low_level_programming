#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a dlistint_t list
 * @head: list's double head pointer
 * @n: data to be stored in node
 *
 * Return: address of new node, NULL otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	/* Return NULL if list doesn't exist or malloc fails */
	if (head == NULL || new == NULL)
		return (NULL);

	/* Make new the head and return new */
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
