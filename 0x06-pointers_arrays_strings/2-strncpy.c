#include "main.h"

/**
 * _strncpy - copy a string with n
 *  @dest: copy to
 *  @src: copy from
 *  @n: number of char to be copied
 *  Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
