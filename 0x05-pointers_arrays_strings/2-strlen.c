#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s:-string to be checked
 * Return: the length of a string
 */
int _strlen(char *s)
{
int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
