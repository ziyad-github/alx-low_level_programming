#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number from n to 98
 * @n: the number to start from
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		n++;
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	while (n > 98)
	{
		printf("%d", n);
		n--;
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
