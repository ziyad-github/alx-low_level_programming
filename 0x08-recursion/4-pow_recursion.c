#include "main.h"

/**
 * _pow_recursion - this function print x power y
 * @x: the number
 * @y: the power
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
