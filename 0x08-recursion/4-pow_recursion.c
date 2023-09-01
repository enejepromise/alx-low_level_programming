#include "main.h"
/**
 * _ pow _ recursion - the power of a number
 * @x: number
 * @y: power
 * Return: the result of power
 */
int _ pow _ recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _ pow _ recursion(x, y -1));
}
