#include "main.h"

/**
 * factorial - this function print the factorial of n
 * @n: the number to calculate its factorial
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
