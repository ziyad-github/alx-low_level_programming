#include "main.h"

/**
* print_numbers - print numbers from 0 to 9
* Return: void
*/

void print_numbers(void)
{
	int i; j;

	for (j = 0; i <= 14; i++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar((i / 10) + i);
			_putchar((i % 10) + i);
		}
		_putchar('\n');
	}

}
