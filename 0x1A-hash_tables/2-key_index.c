#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key to be indexed
 * @size: size of hash table's array
 *
 * Return: key's index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Initialize values */
	unsigned long int index;

	/* To keep index within size range, use modulo */
	index = hash_djb2(key) % size;

	return (index);
}
