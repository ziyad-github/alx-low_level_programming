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
		if (n != 98)
		{
			printf("%d, ", n);
		} else if (n == 98)
		{
			printf("%d\n", n);
			return;
		}
		n++;
	}

	while (n >= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		} else if (n == 98)
		{
			printf("%d\n", n);
			return;
		}
		n--;
	}
