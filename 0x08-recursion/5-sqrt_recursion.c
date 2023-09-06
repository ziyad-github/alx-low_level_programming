#include "main.h"

int _sqrt(int n, int x);

/**
 * _sqrt_recursion - this function print square root of n
 * @n: the number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n  == 1)
	{
		return (1);
	}
	return (_sqrt(n, n));
}

/**
 * _sqrt - this is a helper function finds square root of n
 * @n: the number
 * @x: approximation of square
 * Return: square root of n
 */
int _sqrt(int n, int x)
{
	int next_x = (x + n / x) / 2;

	if (next_x == x)
	{
		return (x);
	}
	return (_sqrt(n, next_x));
}
