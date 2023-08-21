#include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 * @author Anisah
 * @a: Swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
