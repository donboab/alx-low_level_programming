#include "main.h"

/**
 * _pow_recursion - the function print the power of x by y
 *
 * @x: first argument
 * @y: second argument
 *
 * Return: the power of y
 */

int _pow_recursion(int x, int y)
{
	int e;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y % 2 == 0)
	{
		e = _pow_recursion(x, y / 2);
		return (e * e);
	}
	else
		return ((x * _pow_recursion(x, y - 1)));
}
