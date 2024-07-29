#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash_table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	char flag = 0;
	unsigned long int i;
	hash_node_t *node;

	/* Return if list doesn't exist */
	if (ht == NULL || ht->array == NULL)
		return;

	/* Handle print format */
	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		/* Check each node for collision printing */
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			/* Print key: value pair */
			printf("'%s': '%s'", node->key, node->value);

			/* Print colliding node, if any */
			node = node->next;
			flag = 1;
		}
	}
	printf("}\n");
}
