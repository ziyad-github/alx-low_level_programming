#include "main.h"

/**
 * print_sign - it prints the sign of the number added
 * @n: the number to check
 * Return: 1 on positive, 0 on zero, -1 on negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (-1);
}
