/**
 * hash_djb2 - implements the djb's hash function
 * @str: string to be hashed
 *
 * Return: input's hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		/* This computation is similar to (hash * 33)  + c*/
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
