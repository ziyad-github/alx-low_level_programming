#include "main.h"

/**
* more_numbers - print numbers from 0 to 9
* Return: void
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar((i / 10) + i);
			_putchar((i % 10) + i);
		}
		_putchar('\n');
	}

}
