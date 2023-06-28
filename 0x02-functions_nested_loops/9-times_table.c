#include "main.h"

/**
 * times_table - it prints the table of 9
 * Return: void
*/
void times_table(void)
{
	int horizental, vertical, result;

	for (horizental = 0; horizental <= 9; horizental++)
	{
		for (vertical = 0; vertical <= 9; vertical++)
		{
			result = horizental * vertical;
			if (result > 9)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar('0' + result);
			}

			if (vertical != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			
			if ((horizental * (vertical + 1)) <= 9)
			   _putchar(' ');
		}
		_putchar('\n');
	}
}
