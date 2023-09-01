#include "main.h"
/**
 * _strlen_recursion -  function that returns the length of a string.
 *
 * @s: string
 *
 * Return: length of string as an int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (int _strlen_recursion(s + 1))
	}
	return (0);
}
