#include "hash_tables.h"

/**
 * hash_table_create - creates a hash_table
 * @size: size of the array
 *
 * Return: pointer to hash table if successful;
 * otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	/* Allocate memory for hash table data type */
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* Enter table size */
	table->size = size;

	/* Allocate memory for array and it's element */
	table->array = calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	/* initialize each element to NULL */
	for (i = 0; i < table->size; ++i)
		table->array[i] = NULL;

	return (table);
}
