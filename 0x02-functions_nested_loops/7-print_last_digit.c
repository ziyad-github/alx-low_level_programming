#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - it prints the last digit of a number
 * @n: the number to check
 * Return: a number
*/
int print_last_digit(int n)
{
	long abs_n = labs(n);
	int realn = abs_n % 10;

	_putchar(realn + '0');
	return (realn);
}
