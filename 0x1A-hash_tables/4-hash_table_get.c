#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash_table to be implemented on
 * @key: what to look for
 *
 * Return: value associated with 'key', NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL || ht->size == 0
			|| strlen(key) == 0 || ht->array == NULL)
		return (NULL);

	/* Get index associated with key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if return value */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
