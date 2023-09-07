#include "main.h"

int _prime(int n, int x);

/**
 * is_prime_number - this function shows if a number is prime or not
 * @n: the number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1 || (n % 2 == 0 && n != 2))
	{
		return (0);
	}
	else
	{
		return (_prime(n, 3));
	}
}

/**
 * _prime - this is a helper function to get divisors for a number
 * @n: the number
 * @x: divisor
 * Return: 1 if prime, 0 if not
 */
int _prime(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	else if (n / 2 > x)
	{
		return (_prime(n, x + 2));
	}
	else
	{
		return (1);
	}
}
