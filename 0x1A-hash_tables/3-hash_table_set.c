#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be applied on
 * @key: key to be indexed
 * @value: value associated with key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (key == NULL || ht == NULL || new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (new->key == NULL || new->value == NULL)
	{
		free_node(new);
		return (0);
	}
	new->next = NULL;

	index = key_index((const unsigned char *)new->key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free_node(new);
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
		}
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}
	return (1);
}

/**
 * free_node - frees nodes of a hash table
 * @node: node to be freed
 *
 * Return: void
 */
void free_node(hash_node_t *node)
{
	if (node != NULL)
	{
		if (node->key != NULL)
			free(node->key);
		if (node->value != NULL)
			free(node->value);
		free(node);
	}
}
